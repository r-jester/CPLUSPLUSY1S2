#include <iostream>

struct computer{
    int num, index;
    std::string name[20];
    int code[20];
    std::string color[20];
    int ssd[20];
    std::string model[20];
    int year[20];
    std::string made_in[20];
    int ram[20];
    std::string cpu[20];
    float price[20];
    float discount[20];
    void input(){
        std::cout << "===============>>Insert<<===============\n";
        std::cout << "How many computer do you want to buy: ";
        std::cin >> num;
        for (index = 0; index < num ; index++){
            std::cout << "Enter Computer Name: ";
            std::cin.ignore();getline(std::cin, name[index]);
            std::cout << "Enter Computer Code: ";
            std::cin >> code[index];
            std::cout << "Enter Computer Color: ";
            std::cin.ignore();getline(std::cin, color[index]);
            std::cout << "Enter Computer SSD: ";
            std::cin >> ssd[index];
            std::cout << "Enter Computer Model: ";
            std::cin.ignore();getline(std::cin, model[index]);
            std::cout << "Enter Computer Year: ";
            std::cin >> year[index];
            std::cout << "Enter Computer Made In: ";
            std::cin.ignore();getline(std::cin, made_in[index]);
            std::cout << "Enter Computer RAM: ";
            std::cin >> ram[index];
            std::cout << "Enter Computer CPU: ";
            std::cin.ignore();getline(std::cin, cpu[index]);
            std::cout << "Enter Computer Price: ";
            std::cin >> price[index];
            if (price[index] >= 1500){
                discount[index] = price[index] * 0.8;
            }else if (price[index] >= 1300){
                discount[index] = price[index] * 0.9;
            }else if (price[index] >= 1000){
                discount[index] = price[index] * 0.95;
            }else if (price[index] < 1000){
                discount[index] = price[index] * 0.98;
            }
        }
    }
    void output(){
        std::cout << "===============>>Display<<===============\n";
        for (index = 0; index < num ; index++){
            std::cout << "Computer Name: " << name[index] << std::endl;
            std::cout << "Computer Code: " << code[index] << std::endl;
            std::cout << "Computer Color: " << color[index] << std::endl;
            std::cout << "Computer SSD: " << ssd[index] << " $" << std::endl;
            std::cout << "Computer Model: " << model[index] << std::endl;
            std::cout << "Computer Year: " << year[index] << std::endl;
            std::cout << "Computer Made In: " << made_in[index] << std::endl;
            std::cout << "Computer RAM: " << ram[index] << " GB" << std::endl;
            std::cout << "Computer CPU: " << cpu[index] << std::endl;
            std::cout << "Computer Price: " << discount[index] << " $" << std::endl;
        std::cout << "=========================================\n";
        }
    }
};

int main(){
    system("cls");
    computer newComputer;
    newComputer.input();
    newComputer.output();
    return 0;
}