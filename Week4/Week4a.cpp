#include <iostream>
#include <iomanip>

struct employee{
    int n, i;
    int id[20];
    std::string name[20];
    char gender[20];
    int age[20];
    std::string contact[20];
    float salary[20];
    void input(){
        std::cout << "\t============>>Input Employee information<<============\n";
        std::cout << "\tHow many Employee do you want to input:";
        std::cin >> n;
        for (i = 0; i < n; i++){
            std::cout << "\tEnter Employee ID: ";
            std::cin >> id[i];
            std::cout << "\tEnter Employee Name: ";
            std::cin >> name[i];
            std::cout << "\tEnter Employee Gender: ";
            std::cin >> gender[i];
            std::cout << "\tEnter Employee Age: ";
            std::cin >> age[i];
            std::cout << "\tEnter Employee Contact: ";
            std::cin >> contact[i];
            std::cout << "\tEnter Employee Salary: ";
            std::cin >> salary[i];
        }
    }
    void output(){
        std::cout << "\t============>>Output Employee<<============\n";
        std::cout << "\tEmployee_ID Employee_Name Employee_Gender Employee_Age Employee_Contact Employee_Salary\n";
        for (i = 0; i < n; i++){
            std::cout << "\t" << id[i] << std::setw(14) << name[i] << std::setw(15) << gender[i] << std::setw(17) << age[i] << std::setw(12) << contact[i] << std::setw(15) << salary[i] << "$" << std::setw(12) << "\n";
        }
    }
};

int main(){
    system("cls");

    employee emp;
    emp.input();
    system("cls");
    emp.output();

    return 0;
}