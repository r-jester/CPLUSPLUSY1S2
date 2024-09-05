#include <iostream>
#include <string>

class car
{
private:
    std::string car_name;
    std::string car_model;
    int car_year;
    float car_price;
    std::string car_made_in;
    std::string car_color;
    std::string car_option;

public:
    void inputcar()
    {
        std::cout << "=============>>Insert<<=============\n";
        std::cout << "Enter Car Name: ";
        std::cin.ignore();
        getline(std::cin, car_name);
        std::cout << "Enter Car Model: ";
        getline(std::cin, car_model);
        std::cout << "Enter Car Year: ";
        std::cin >> car_year;
        std::cout << "Enter Car Price: ";
        std::cin >> car_price;
        std::cout << "Enter Car Made In: ";
        std::cin.ignore();
        std::getline(std::cin, car_made_in);
        std::cout << "Enter Car Color: ";
        getline(std::cin, car_color);
        std::cout << "Enter Car Option: ";
        getline(std::cin, car_option);
    }
    void outputcar()
    {
        std::cout << "=============>>Display<<=============\n";
        std::cout << "Enter Car Name   : " << car_name << '\n';
        std::cout << "Enter Car Model  : " << car_model << '\n';
        std::cout << "Enter Car Year   : " << car_year << '\n';
        std::cout << "Enter Car Price  : " << car_price << '\n';
        std::cout << "Enter Car Made In: " << car_made_in << '\n';
        std::cout << "Enter Car Color  : " << car_color << '\n';
        std::cout << "Enter Car Option : " << car_option << '\n';
        std::cout << "=====================================\n";
    }
};

int main()
{
    system("cls");
    int n, i;
    std::cout << "How many Car do you want to input: ";
    std::cin >> n;
    car obj[n];
    std::cout << sizeof(car) << std::endl;
    for (i = 0; i < n; i++)
    {
        obj[i].inputcar();
    }
    for (i = 0; i < n; i++)
    {
        obj[i].outputcar();
    }
    return 0;
}