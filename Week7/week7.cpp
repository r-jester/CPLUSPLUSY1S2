#include<iostream>

class A{ // base class A
    protected:
        int a = 20; // member or attribute
        int x = 10;
    public:
        void setA(){ // method
            std::cout << "\tThis's base class (A)\n";
            std::cout << "\tA + X = " << a + x << "\n";
        }
};

class B : public A{ // single inheritance // B is a derived class
    protected:
        int b = 50;
    public:
        void setB(){
            std::cout << "\tThis's derived class (B)\n";
            std::cout << "\tB - X = " << b - x << '\n';
        }
};

class C : public B{ // multi-level inheritance
    protected:
        int c = 100;
    public:
        void setC(){
            std::cout << "\tThis's second derived class (C)\n";
            std::cout << "\tC * A = " << c * a << '\n';
        }
};
class D{ // base class D
    protected:
        int d = 100;
    public:
        void setD(){
            std::cout << "\tThis's derived class (D)\n";
        }
};
class E : public D , public A{ // multiple inheritance from class A and class D
    protected:
        int e = 100;
    public:
        void setE(){
            std::cout << "\tThis's derived class (E)\n";
            std::cout << "\tD * A = " << d * a << '\n';
            std::cout << "\tE / A = " << e / a << '\n';
        }
};

class F : virtual public A{ // class B and class F is Inherited from class A called Hierarchical inheritance
    protected:
        int f = 100;
        public:
            void setF(){
                std::cout << "\tThis's derived class (F)\n";
                std::cout << "\tF + A = " << f + a << '\n';
            }
};

class G : virtual public A{
    protected:
        int g = 100;
    public:
        void setG(){
            std::cout << "\tThis is derived class (G)\n";
        }
};

class H : public F, public G{ // class F & G is inherited from class A and class H is inherited from these class
    protected:
        int h = 100;
    public:
        void setH(){
            std::cout << "\tThis's derived class (H)\n"; // without virtual use F::a or G::a
            std::cout << "\tF + A = " << f + F::a << '\n';
            std::cout << "\tG + A = " << g + G::a << '\n';
            std::cout << "\tF + A = " << h + F::a << '\n';
            std::cout << "\tF + A = " << h + f << '\n';
            std::cout << "\tF + A = " << h + g << '\n';
        }
};

int main(){
    system("cls");

    A objA;
    objA.setA();

    B objB;
    objB.setA();
    objB.setB();

    C objC;
    objC.setA();
    objC.setB();
    objC.setC();

    E objE;
    objE.setA();
    objE.setD();
    objE.setE();

    F objF;
    objF.setA();
    objF.setF();

    H objH;
    objH.G::setA(); // Used virtual G:: or F:: not necessary
    objH.setF();
    objH.setG();
    objH.setH();

    return 0;
}