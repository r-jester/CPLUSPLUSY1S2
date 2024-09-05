#include <iostream>
#include <string>

class car{
private:
    int n, i;
    std::string car_name[20];
    std::string car_model[20];
    int car_year[20];
    float car_price[20];
    std::string car_made_in[20];
    std::string car_color[20];
    std::string car_option[20];
public:
    void inputcar(){
        std::cout << "=============>>Insert<<=============\n";
        std::cout << "How many Car do you want to input: ";
        std::cin >> n;
        for (i = 0; i < n; i++){
            std::cout << "Enter Car Name: ";
            std::cin.ignore();
            getline(std::cin, car_name[i]);
            std::cout << "Enter Car Model: ";
            getline(std::cin, car_model[i]);
            std::cout << "Enter Car Year: ";
            std::cin >> car_year[i];
            std::cout << "Enter Car Price: ";
            std::cin >> car_price[i];
            std::cout << "Enter Car Made In: ";
            std::cin.ignore();
            std::getline(std::cin, car_made_in[i]);
            std::cout << "Enter Car Color: ";
            getline(std::cin, car_color[i]);
            std::cout << "Enter Car Option: ";
            getline(std::cin, car_option[i]);
        }
    }
    void outputcar(){
        for (i = 0; i < n; i++){
            std::cout << "=============>>Display<<=============\n";
            std::cout << "Enter Car Name   : " << car_name[i] << '\n';
            std::cout << "Enter Car Model  : " << car_model[i] << '\n';
            std::cout << "Enter Car Year   : " << car_year[i] << '\n';
            std::cout << "Enter Car Price  : " << car_price[i] << '\n';
            std::cout << "Enter Car Made In: " << car_made_in[i] << '\n';
            std::cout << "Enter Car Color  : " << car_color[i] << '\n';
            std::cout << "Enter Car Option : " << car_option[i] << '\n';
            std::cout << "=====================================\n";
        }
    }
};

int main(){
    system("cls");

    car obj;
    obj.inputcar();
    obj.outputcar();

    return 0;
}