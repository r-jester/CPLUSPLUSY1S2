#include <iostream>
#include <conio.h>
#include <string>

class Phone{
    protected:
        std::string model;
        short capacity;
        std::string color;
        float price;
        std::string made_in;
};

class iPhone : public Phone{
    public:
        void InsertiPhone(){
            std::cout << "============= >> Insert << =============\n";
            std::cout << "Input Model: ";
            std::cin >> model;
            std::cout << "Input Capacity: ";
            std::cin >> capacity;
            std::cout << "Input Color: ";
            std::cin >> color;
            std::cout << "Input Price: ";
            std::cin >> price;
            std::cout << "Input Made In: ";
            std::cin >> made_in;
        }
        void DisplayiPhone(){
            std::cout << "============= >> Display << =============\n";
            std::cout << "Model: " << model << std::endl;
            std::cout << "Capacity: " << capacity << " GB" << std::endl;
            std::cout << "Color: " << color << std::endl;
            std::cout << "Price: $ " << price << std::endl;
            std::cout << "Made In: " << made_in << std::endl;
        }
};

class Oppo : public iPhone{
    private:
        short warranty;
    public:
        void InsertOppo(){
            InsertiPhone();
            std::cout << "Enter Warranty: ";
            std::cin >> warranty;
        }
        void DisplayOppo(){
            DisplayiPhone();
            std::cout << "Warranty: " << warranty << std::endl;
        }
};

class Samsung : public Oppo{
    private:
        std::string sale_date;
    public:
        void InsertSamsung(){
            InsertOppo();
            std::cout << "Enter Sale Date: ";
            std::cin >> sale_date;
        }
        void DisplaySamsung(){
            DisplayOppo();
            std::cout << "Sale Date: " << sale_date << std::endl;
        }
};

int main(){
    int choice;
    char end;
    iPhone iphone[100];
    Oppo oppo[100];
    Samsung samsung[100];
    std::string phone[3] = {"1. iPhone", "2. Oppo", "3. Samsung"};
    do {
    system("cls");
        for (short i = 0; i < 3; i++){
            std::cout << phone[i] << std::endl;
        }
        again:
        std::cout << "Choose Option: ";
        std::cin >> choice;
        switch(choice){
            case 1:
                std::cout << "=======>> " << phone[choice - 1] << " <<=======\n";
                std::cout << "How many Phone do you want to buy: ";
                std::cin >> choice;
                for(short i = 0; i < choice; i++){
                    std::cout << "\nItem: " << i + 1 << std::endl;
                    iphone[i].InsertiPhone();
                }
                std::cout << "\n=======>> " << phone[choice - 1] << " <<=======\n";
                for(short i = 0; i < choice; i++){
                    std::cout << "\nItem: " << i + 1 << std::endl;
                    iphone[i].DisplayiPhone();
                }
                getch();
                system("cls");
                break;
            case 2:
                std::cout << "=======>> " << phone[choice - 1] << " <<=======\n";
                std::cout << "How many Phone do you want to buy: ";
                std::cin >> choice;
                for(short i = 0; i < choice; i++){
                    std::cout << "\nItem: " << i + 1 << std::endl;
                    oppo[i].InsertOppo();
                }
                std::cout << "\n=======>> " << phone[choice - 1] << " <<=======\n";
                for(short i = 0; i < choice; i++){
                    std::cout << "\nItem: " << i + 1 << std::endl;
                    oppo[i].DisplayOppo();
                }
                getch();
                system("cls");
                break;
            case 3:
                std::cout << "=======>> " << phone[choice - 1] << " <<=======\n";
                std::cout << "How many Phone do you want to buy: ";
                std::cin >> choice;
                for(short i = 0; i < choice; i++){
                    std::cout << "\nItem: " << i + 1 << std::endl;
                    samsung[i].InsertSamsung();
                }
                std::cout << "\n=======>> " << phone[choice - 1] << " <<=======\n";
                for(short i = 0; i < choice; i++){
                    std::cout << "\nItem: " << i + 1 << std::endl;
                    samsung[i].DisplaySamsung();
                }
                getch();
                system("cls");
                break;
            default:
                std::cout << "Wrong Option!\n";
                goto again;
                break;
        }
        std::cout << "Do you want to continue(Y/N): ";
        std::cin >> end;
        while(getchar() != '\n');
    } while(end != 'N' || end != 'n');
    return 0;
}