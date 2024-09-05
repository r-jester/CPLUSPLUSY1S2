// Struct Lesson
#include <iostream>

struct car
{
    int car_code;
    std::string name;
    std::string model;
    std::string color;
    int year;
    float price;
};

int main()
{
    system("cls");

    car newCar;
    newCar.car_code = 1001;
    newCar.color = "Green";
    newCar.model = "Ford";
    newCar.name = "Ford Ranger 2024";
    newCar.price = 50000;
    newCar.year = 2024;

    std::cout << "Car Code: " << newCar.car_code << "\n";
    std::cout << "Color: " << newCar.color << "\n";
    std::cout << "Model: " << newCar.model << "\n";
    std::cout << "Name: " << newCar.name << "\n";
    std::cout << "Price: " << newCar.price << "\n";
    std::cout << "Year: " << newCar.year << "\n";

    return 0;
}