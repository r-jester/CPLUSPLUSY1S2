#include <iostream>
#include <vector>
#include <conio.h>
class Yeanyun
{
private:
    std::string model, made_in, color;
    double price;
    int id = 0;

public:
    int getId()
    {
        return id;
    }
    void Input()
    {
        std::cout << "\tEnter Id: ";
        std::cin >> id;
        while (getchar() != '\n')
            ;
        std::cout << "\tEnter Model: ";
        getline(std::cin >> std::ws, model);
        std::cout << "\tEnter Color: ";
        getline(std::cin >> std::ws, color);
        std::cout << "\tEnter Price: ";
        std::cin >> price;
        while (getchar() != '\n')
            ;
        std::cout << "\tEnter Made In: ";
        getline(std::cin >> std::ws, made_in);
    }
    void Output()
    {
        std::cout << "\tId: " << id << std::endl;
        std::cout << "\tModel: " << model << std::endl;
        std::cout << "\tColor: " << color << std::endl;
        std::cout << "\tPrice: " << price << " $" << std::endl;
        std::cout << "\tPrice in Khmer: " << price * 4100 << " Riel" << std::endl;
        std::cout << "\tMade In: " << made_in << std::endl;
    }
};
void freespace(std::vector<Yeanyun> &yeanyun)
{
    int num;
    Yeanyun newYeanyun;
    std::cout << "\tHow many time: ";
    std::cin >> num;
    std::cout << std::endl;
    for (int i = 0; i < num; i++)
    {
        std::cout << "\tNo: " << i + 1 << std::endl;
        newYeanyun.Input();
        std::cout << std::endl;
        yeanyun.push_back(newYeanyun);
    }
}
void demo(std::vector<Yeanyun> &yeanyun)
{
    bool istrue = 0;
    std::cout << "\tDisplaying....\n\n";
    for (int i = 0; i < yeanyun.size(); i++)
    {
        if (yeanyun[i].getId() != 0)
        {
            std::cout << "\tNo: " << i + 1 << std::endl;
            yeanyun[i].Output();
            std::cout << std::endl;
            istrue = 1;
        }
    }
    if (!istrue)
    {
        std::cout << "\tUndefined Data...!\n\n";
    }
}
int navigate(std::vector<Yeanyun> &yeanyun)
{
    int id;
    std::cout << "\tEnter id to search: ";
    std::cin >> id;
    std::cout << std::endl;
    for (int i = 0; i < yeanyun.size(); i++)
    {
        if (id == yeanyun[i].getId())
        {
            std::cout << "\tNo: " << i + 1 << std::endl;
            yeanyun[i].Output();
            std::cout << std::endl;
            return yeanyun[i].getId();
        }
    }
    std::cout << "\tId search not found!\n\n";
    return -1;
}
void update(std::vector<Yeanyun> &yeanyun)
{
    int id;
    Yeanyun yeanYun;
    do
    {
        id = navigate(yeanyun);
    } while (id == -1 && yeanYun.getId() != 0);
    for (int i = 0; i < yeanyun.size(); i++)
    {
        if (id == yeanyun[i].getId())
        {
            std::cout << "\tNo: " << i + 1 << std::endl;
            yeanyun[i].Input();
            std::cout << std::endl;
            break;
        }
    }
}
void Delete(std::vector<Yeanyun> &yeanyun)
{
    int id;
    Yeanyun yeanYun;
    do
    {
        id = navigate(yeanyun);
    } while (id == -1 && yeanYun.getId() != 0);
    for (int i = 0; i < yeanyun.size(); i++)
    {
        if (id == yeanyun[i].getId())
        {
            std::cout << "\tDelete is completed...!\n\n";
            yeanyun.erase(yeanyun.begin() + i);
            break;
        }
    }
}
void Menu(std::vector<Yeanyun> &car, std::vector<Yeanyun> &moto, std::vector<Yeanyun> &passapp)
{
    int choose, pick;
    bool istrue = 0;
    while (true)
    {
        system("cls");
        std::cout << "  ==========>> Vehicle Type <<==========\n";
        std::cout << "\t ----------------------\n";
        std::cout << "\t|1.      Car           |\n";
        std::cout << "\t ----------------------\n";
        std::cout << "\t ----------------------\n";
        std::cout << "\t|2.      Motorbike     |\n";
        std::cout << "\t ----------------------\n";
        std::cout << "\t ----------------------\n";
        std::cout << "\t|3.      PassApp       |\n";
        std::cout << "\t ----------------------\n";
        std::cout << "\t ----------------------\n";
        std::cout << "\t|4.      Exit          |\n";
        std::cout << "\t ----------------------\n";
        std::cout << "\tChoose ----> ";
        do
        {
            std::cin >> choose;
            istrue = 0;
        } while (choose < 1 || choose > 4);
        if (choose == 4)
            break;
        while (!istrue)
        {
            system("cls");
            std::cout << "\t ---------------\n";
            std::cout << "\t|  --> Menu <-- |\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t|1.    Input    |\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t|2.    Display  |\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t|3.    Search   |\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t|4.    Update   |\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t|5.    Delete   |\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t ---------------\n";
            std::cout << "\t|6.    Exit     |\n";
            std::cout << "\t ---------------\n";
            std::cout << "\tChoose ----> ";
            do
            {
                std::cin >> pick;
            } while (pick < 1 || pick > 6);
            system("cls");
            switch (pick)
            {
            case 1:
                switch (choose)
                {
                case 1:
                    std::cout << "\t\n=============>> Car System <<=============\n\n";
                    freespace(car);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                    std::cout << "\t\n=============>> Motorbike System <<=============\n\n";
                case 2:
                    freespace(moto);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                    std::cout << "\t\n=============>> PassApp System <<=============\n\n";
                case 3:
                    freespace(passapp);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                }
                break;
            case 2:
                switch (choose)
                {
                case 1:
                    std::cout << "\t\n=============>> Car System <<=============\n\n";
                    demo(car);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                case 2:
                    std::cout << "\t\n=============>> Motorbike System <<=============\n\n";
                    demo(moto);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                case 3:
                    std::cout << "\t\n=============>> PassApp System <<=============\n\n";
                    demo(passapp);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                }
                break;
            case 3:
                switch (choose)
                {
                case 1:
                    std::cout << "\t\n=============>> Car System <<=============\n\n";
                    navigate(car);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                case 2:
                    std::cout << "\t\n=============>> Motorbike System <<=============\n\n";
                    navigate(moto);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                case 3:
                    std::cout << "\t\n=============>> PassApp System <<=============\n\n";
                    navigate(passapp);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                }
                break;
            case 4:
                switch (choose)
                {
                case 1:
                    std::cout << "\t\n=============>> Car System <<=============\n\n";
                    update(car);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                case 2:
                    std::cout << "\t\n=============>> Motorbike System <<=============\n\n";
                    update(moto);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                case 3:
                    std::cout << "\t\n=============>> PassApp System <<=============\n\n";
                    update(passapp);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                }
                break;
            case 5:
                switch (choose)
                {
                case 1:
                    std::cout << "\t\n=============>> Car System <<=============\n\n";
                    Delete(car);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                case 2:
                    std::cout << "\t\n=============>> Motorbike System <<=============\n\n";
                    Delete(moto);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                case 3:
                    std::cout << "\t\n=============>> PassApp System <<=============\n\n";
                    Delete(passapp);
                    std::cout << "\tPress any key to continue . . . ";
                    getch();
                    break;
                }
                break;
            case 6:
                istrue = 1;
            }
        }
    }
}
int main()
{
    system("color A");
    std::vector<Yeanyun> newCar;
    std::vector<Yeanyun> newMotorbike;
    std::vector<Yeanyun> newPassApp;
    std::string un, pw;
    while (true)
    {
        system("cls");
        std::cout << "\tEnter Username: ";
        std::cin >> un;
        std::cout << "\tEnter Password: ";
        std::cin >> pw;
        if (un == "virak" && pw == "okay")
            break;
    }
    Menu(newCar, newMotorbike, newPassApp);
    return 0;
}