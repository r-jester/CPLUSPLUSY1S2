#include <iostream>

class book{
private:
    std::string name;
    int code;
    int page;
    std::string language;
    std::string author;
    int generations;
    float price;
    float discount;
public:
    void input(){
        std::cout << "===========>>Insert<<===========\n";
        std::cout << "Enter Name: ";
        std::cin >> name;
        std::cout << "Enter Code: ";
        std::cin >> code;
        std::cout << "Enter Page: ";
        std::cin >> page;
        std::cout << "Enter Language: ";
        std::cin >> language;
        std::cout << "Enter Author: ";
        std::cin >> author;
        std::cout << "Enter Generations: ";
        std::cin >> generations;
        std::cout << "Enter Price: ";
        std::cin >> price;
        if(price >= 100){
            discount = price * 0.85;
        }else if(price >= 90 && price < 100){
            discount = price * 0.9;
        }else if(price >= 80 && price < 90){
            discount = price * 0.95;
        }else if(price >= 50 && price < 80){
            discount = price * 0.97;
        }else if(price < 50 && price > 0){
            std::cout << "NO Discount!\n";
            discount = price;
        }else{
            std::cout << "Wrong!\n";
        }
    }
    void output(){
        std::cout << "===========>>Display<<===========\n";
        std::cout << "Book Name: " << name << '\n';
        std::cout << "Book Code: " << code << '\n';
        std::cout << "Book Page: " << page << '\n';
        std::cout << "Book Language: " << language << '\n';
        std::cout << "Book Author: " << author << '\n';
        std::cout << "Book Generations: " << generations << '\n';
        std::cout << "Book Price: " << discount << " $" << '\n';
        std::cout << "=================================\n";
    }
};

int main(){
    system("cls");
    int n, i;
    book books[20];
    std::cout << "How many Book do you want to buy: ";
    std::cin >> n;
    for (i = 0; i < n; i++){
        books[i].input();
    }
    for(i = 0; i < n; i++){
        books[i].output();
    }
    return 0;
}