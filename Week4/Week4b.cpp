#include <iostream>
#include <string>
#include <iomanip>

struct phoneType
{
    int i, n;
    std::string phone_name[20];
    int code[20];
    std::string color[20];
    int capacity[20];
    std::string model[20];
    int year[20];
    std::string made_in[20];
    float price[20];
    void input()
    {
        std::cout << "\t============>>Input Phone Detail<<============\n";
        std::cout << "\tHow many Phone Type Do you want to input: ";
        std::cin >> n;
        for (i = 0; i < n; i++)
        {
            std::cout << "\tEnter Phone Name: ";
            std::cin.ignore();
            std::getline(std::cin, phone_name[i]);
            std::cout << "\tEnter Code: ";
            std::cin >> code[i];
            std::cout << "\tEnter Color: ";
            std::cin.ignore();
            std::getline(std::cin, color[i]);
            std::cout << "\tEnter Capacity: ";
            std::cin >> capacity[i];
            std::cout << "\tEnter Model: ";
            std::cin.ignore();
            std::getline(std::cin, model[i]);
            std::cout << "\tEnter Year: ";
            std::cin >> year[i];
            std::cout << "\tEnter Made In: ";
            std::cin.ignore();
            std::getline(std::cin, made_in[i]);
            std::cout << "\tEnter Price: ";
            std::cin >> price[i];
        }
    }
    void output()
    {
        for (i = 0; i < n; i++)
        {
            std::cout << "\tPhone Name: " << phone_name[i] << '\n';
            std::cout << "\tCode: " << code[i] << '\n';
            std::cout << "\tColor: " << color[i] << '\n';
            std::cout << "\tCapacity: " << capacity[i] << " GB" << '\n';
            std::cout << "\tModel: " << model[i] << '\n';
            std::cout << "\tYear: " << year[i] << '\n';
            std::cout << "\tMade In: " << made_in[i] << '\n';
            std::cout << "\tPrice: " << price[i] << " $" << '\n';
        }
    }
    void output1()
    {
        for (i = 0; i < n; i++)
        {
            std::cout << "\t Phone_Name \t Code \t Color \t Capacity \t Model \t Year \t Made_In Price\n";
            std::cout << "\t" << phone_name[i] << "\t" << code[i] << "\t" << color[i] << "\t" << capacity[i] << " GB" << "\t" << model[i] << "\t" << year[i] << "\t" << made_in[i] << "\t" << price[i] << "$" << "\n";
        }
    }
};

int main()
{
    system("cls");

    phoneType newPhone;
    newPhone.input();
    system("cls");
    newPhone.output();
    newPhone.output1();

    return 0;
}