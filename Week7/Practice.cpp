#include <iostream>

class A{
    public:
        void printf(){
            std::cout << "Class (A)\n";
        }
};

class B{
    public:
        void printf(){
            std::cout << "Class (B)\n";
        }
};

void Okay(){
    std::cout << "Hello World\n";
}

std::string ok(){
    return "Hi World";
}

int main(){
    system("cls");
    A a;
    a.printf();
    B b;
    b.printf();
    Okay();
    ok();
    return 0;
}