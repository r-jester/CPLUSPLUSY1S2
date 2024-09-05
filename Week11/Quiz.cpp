#include <iostream>
#include <conio.h>
#include <string>

class Vehicle {
    private:
        std::string model, made_in, color;
        int id = 0;
        double price = 0.0;
    public:
        int getId(){
            return id;
        }
        void setId(int id){
            this -> id = id;
        }
        std::string getModel(){
            return model;
        }
        void setModel(std::string model){
            this -> model = model;
        }
        void Insert(){
            std::cout << "###################\n";
            std::cout << "#      Input      #\n";
            std::cout << "###################\n";
            std::cout << "Enter Id: ";
            std::cin >> id;
            std::cout << "Enter Model: ";
            std::cin.ignore();
            getline(std::cin, model);
            std::cout << "Enter Made In: ";
            getline(std::cin, made_in);
            std::cout << "Enter Color: ";
            getline(std::cin, color);
            std::cout << "Enter Price: ";
            std::cin >> price;
        }
        void Display(){
            std::cout << "Id: " << id << std::endl;
            std::cout << "Model: " << model << std::endl;
            std::cout << "Made In: " << made_in << std::endl;
            std::cout << "Color: " << color << std::endl;
            std::cout << "Price: " << price << " $" << std::endl;
        }
        void cleanAttribute(){
            id = 0;
            model = "";
            made_in = "";
            color = "";
            price = 0.0;
        }
};

void getMore(Vehicle* airplane, int& index){
    int time;
    std::cout << "How many times: ";
    std::cin >> time;
    std::cout << "Time: " << time << "\n";
    for (int i = 0; i < time; i++){
        airplane[index++].Insert();
    }
}

void Show(Vehicle* airplane){
    bool istrue = false;
    for (short i = 0; i < 50; i++){
        if (airplane[i].getId() != 0){
            airplane[i].Display();
            istrue = 1;
        }
    }
    if (istrue == 0) {
        std::cout << "Undefined Data....!\n";
    }
}
int SearchTool(Vehicle* airplane) {
    int option, id;
    std::string model;
    std::cout << "1. Search by Id\n2. Search by Model\nChoose: ";
    do {
        std::cin >> option;
    }while(option != 1 && option != 2);
    switch(option){
        case 1:
            std::cout << "Enter Id to search: ";
            std::cin >> id;
            for (short i = 0; i < 50; i++){
                if (airplane[i].getId() == id){
                std::cout << "Id Found!\n";
                airplane[i].Display();
                return airplane[i].getId();
                }
            }
            break;
        case 2:
            std::cout << "Enter Model to search: ";
            std::cin >> model;
            for (short i = 0; i < 50; i++){
                if (airplane[i].getModel() == model){
                    std::cout << "Model Found!\n";
                    airplane[i].Display();
                    return airplane[i].getId();
                }
            }
            break;
    }
    std::cout << "Id / Model Not Found!!\n";
    return -1; // use for search failed
}

void UpdateEquipment(Vehicle* airplane){
    again:
    int id = SearchTool(airplane);
    if (id == -1)
        goto again;
    for (short i = 0; i < 50; i++){
        if (airplane[i].getId() == id){
            airplane[i].Insert();
        }
    }
}

void DeleteItem(Vehicle* airplane){
    again:
    int id = SearchTool(airplane);
    if (id == -1)
        goto again;
    for (short i = 0; i < 50; i++){
        if (id == airplane[i].getId()){
            airplane[i] = airplane[i + 1];
            airplane[i + 1].cleanAttribute();// if 3 remove, 3 take 4, 4 take 5, and 5 clear
        }
    }
}

void Menu(Vehicle* Car, Vehicle* Motorbike, Vehicle* PassApp, int& C, int& M, int& P){
    bool istrue = false;
    short choose, pick;
    while (true) {
        std::cout << "===========>> Machine Type <<===========\n"
                  << "1.Car\n"
                  << "2.MotoBike\n"
                  << "3.PassApp\n"
                  << "4.Exit\n"
                  << "--> ";
        do{
            std::cin >> choose;
            istrue = false;
        } while (choose < 1 || choose > 4);
        
        if (choose == 4){
            break;
        }

        while (!istrue){
            system("cls");
            std::cout << "==========>> Menu <<============\n"
                      << "1.Input\n"
                      << "2.List\n"
                      << "3.Search\n"
                      << "4.Update\n"
                      << "5.Delete\n"
                      << "6.Exit\n"
                      << "--> ";
            do{
                std::cin >> pick;
            } while (pick < 1 || pick > 6);
            system("cls");

            switch (pick){
            case 1:
                switch (choose){
                case 1:
                std::cout << "==================>> Car System <<==================\n";
                    getMore(Car, C);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 2:
                std::cout << "==================>> Motorbike System <<==================\n";
                    getMore(Motorbike, M);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 3:
                std::cout << "==================>> PassApp System <<==================\n";
                    getMore(PassApp, P);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                }
                break;
            case 2:
                switch (choose){
                case 1:
                std::cout << "==================>> Car System <<==================\n";
                    Show(Car);
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 2:
                std::cout << "==================>> Motorbike System <<==================\n"; 
                    Show(Motorbike);
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 3:
                std::cout << "==================>> PassApp System <<==================\n";
                    Show(PassApp);
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                }
                break;
            case 3:
                switch (choose){
                case 1:
                std::cout << "==================>> Car System <<==================\n";
                    SearchTool(Car);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 2:
                std::cout << "==================>> Motorbike System <<==================\n";
                    SearchTool(Motorbike);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 3:
                std::cout << "==================>> PassApp System <<==================\n";
                    SearchTool(PassApp);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                }
                break;
            case 4:
                switch (choose){
                case 1:
                std::cout << "==================>> Car System <<==================\n";
                    UpdateEquipment(Car);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 2:
                std::cout << "==================>> Motorbike System <<==================\n";
                    UpdateEquipment(Motorbike);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 3:
                std::cout << "==================>> PassApp System <<==================\n";
                    UpdateEquipment(PassApp);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                }
                break;
            case 5:
                switch (choose){
                case 1:
                std::cout << "==================>> Car System <<==================\n";
                    DeleteItem(Car);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 2:
                std::cout << "==================>> Motorbike System <<==================\n";
                    DeleteItem(Motorbike);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                case 3:
                std::cout << "==================>> PassApp System <<==================\n";
                    DeleteItem(PassApp);
                    while (getchar() != '\n');
                    std::cout << "Press Any key to continue!!!!\n";
                    getch();
                    break;
                }
                break;
            case 6:
                istrue = true;
            }
        }
        system("cls");
    }
}

void login();

int main()
{
    system("cls");
    login();
    int a = 0, s = 0, b = 0;
    Vehicle car[50];
    Vehicle motorbike[50];
    Vehicle passapp[50];
    Menu(car, motorbike, passapp, a, s, b);
    // motorbike[0].Insert();
    // motorbike[0].Display();

    return 0;
}

void login()
{
    std::string un, pw;
    bool istrue;
    while (!istrue)
    {
        system("cls");
        std::cout << "Enter Username: ";
        std::cin >> un;
        std::cout << "Enter Password: ";
        std::cin >> pw;
        if (un == "okay" && pw == "okay")
            istrue = true;
    }
}
