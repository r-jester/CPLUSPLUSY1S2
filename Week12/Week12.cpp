#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>

class GarageCar
{ 
protected:
    int id;
    std::string color, name, model, made_in, year;
    float price;
    std::string username = "a", pp = "1";

public:
    void processloading()
    {
        int barWidth = 30;
        for (int i = 0; i <= 100; i++)
        {
            std::cout << "[";
            int pos = barWidth * i / 100;
            for (int j = 0; j <= barWidth; j++)
            {
                if (j < pos)
                {
                    std::cout << "=";
                }
                else if (j == pos)
                {
                    std::cout << ">";
                }
                else
                {
                    std::cout << " ";
                }
            }
            std::cout << "]" << i << "%\r";
            std::cout.flush();
            Sleep(30);
        }
    }
    void login()
    {
        std::string username1, pp1;
        while (true)
        {
            std::cout << std::setw(70) << "=============== Login Program ===============\n";
            std::cout << "Enter Your Username:";
            std::cin >> username1;
            std::cout << "Enter Your Password:";
            std::cin >> pp1;
            std::cout << std::endl;
            processloading();
            system("cls");
            if (username1 == username && pp1 == pp)
            {
                std::cout << "Login successful!" << std::endl;
                break;
            }
            else
            {
                system("clor 4");
                std::cout << "Wrong username or password" << std::endl;
                system("pause");
                system("cls");
                system("color A");
            }
        }
    }
    void input()
    {
        std::cout << "Enter id    :";
        std::cin >> id;
        std::cout << "Enter name    :";
        std::cin >> name;
        std::cout << "Enter made_in    :";
        std::cin >> made_in;
        std::cout << "Enter year    :";
        std::cin >> year;
        std::cout << "Enter color    :";
        std::cin >> color;
        std::cout << "Enter price    :";
        std::cin >> price;
    }
    void output() const
    {
        std::cout << "Vehicle id    :" << id << std::endl;
        std::cout << "Vehicle name    :" << name << std::endl;
        std::cout << "Vehicle made_in    :" << made_in << std::endl;
        std::cout << "Vehicle year    :" << year << std::endl;
        std::cout << "Vehicle color    :" << color << std::endl;
        std::cout << "Vehicle price    :$" << price << std::endl;
    }
    int getId() const
    {
        return id;
    }
    void menu() const
    {
        std::cout << "\t----------   --------   ------------   -----------   -----------" << std::endl;
        std::cout << "\t|1. Input|   |2.List|   |3. Search |   |4. Update|   |5. Delete |" << std::endl;
        std::cout << "\t----------   --------   ------------   -----------   -----------" << std::endl;
    }
};
class Car : public GarageCar
{
public:
    void inputCar()
    {
        input();
    }
    void outputCar() const
    {
        output();
    }
};
class Motorbike : public GarageCar
{
public:
    void inputMotorbike()
    {
        input();
    }
    void outputMotorbike() const
    {
        output();
    }
};
class PassApp : public GarageCar
{
public:
    void inputPassApp()
    {
        input();
    }
    void outputPassApp() const
    {
        output();
    }
};

int main()
{
    int carCount = 0, motoCount = 0, passAppCount = 0;
    int op, op_car, op_moto, op_passApp;
    int id_search;
    bool isfound = false;
    Car cars[100];
    Motorbike motobikes[100];
    PassApp passApps[100];
    system("cls");
    system("color A");
    cars->login();
    system("cls");
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    do
    {
        std::cout << std::setw(70) << "==========> 169 Car Garage <==========" << std::endl
             << std::endl;
        std::cout << "\t\t\t ----------   ---------------   --------------   ----------\n";
        std::cout << "\t\t\t | 1. Car |   | 2. Motobike |   | 3. PassApp |   |4. Exit |" << std::endl;
        std::cout << "\t\t\t ----------   ---------------   --------------   ----------\n";
        std::cout << "\t\t\t Choose Your option:";
        std::cin >> op;
        system("cls");
        switch (op)
        {
        case 1:
            std::cout << std::setw(70) << "========== Car system ==========\n\n";
            cars->menu();
            std::cout << " \t Choose your option";
            std::cin >> op_car;
            switch (op_car)
            {
            case 1:
                system("cls");
                std::cout << "How many cars do you want to input:";
                std::cin >> carCount;
                for (int i = 0; i < carCount; i++)
                {
                    std::cout << "Car No" << i + 1 << std::endl;
                    cars[i].inputCar();
                }
                break;
            case 2:
                system("cls");
                for (int i = 0; i < carCount; i++)
                {
                    std::cout << "Car No" << i + 1 << std::endl;
                    cars[i].outputCar();
                }
                break;
            case 3:
                system("cls");
                std::cout << "Enter id to search:";
                std::cin >> id_search;
                isfound = false;
                for (int i = 0; i < carCount; i++)
                {
                    if (id_search == cars[i].getId())
                    {
                        system("cls");
                        std::cout << "Car No" << i + 1 << std::endl;
                        cars[i].outputCar();
                        isfound = true;
                        break;
                    }
                }
                if (!isfound)
                {
                    std::cout << "No car with id id" << id_search << "found." << std::endl;
                }
                break;
            case 4:
                system("cls");
                std::cout << "Enter id to update:";
                std::cin >> id_search;
                isfound = false;
                for (int i = 0; i < carCount; i++)
                {
                    if (id_search == cars[i].getId())
                    {
                        system("cls");
                        std::cout << "Car No" << i + 1 << std::endl;
                        cars[i].outputCar();
                        std::cout << "Will update thid information" << std::endl;
                        system("pause");
                        system("cls");
                        cars[i].inputCar();
                        isfound = true;
                        break;
                    }
                }
                if (!isfound)
                {
                    std::cout << "No car with id " << id_search << "found." << std::endl;
                }
                break;
            case 5:
                system("cls");
                std::cout << "Enter id to delete:";
                std::cin >> id_search;
                isfound = false;
                for (int i = 0; i < carCount; i++)
                {
                    if (id_search == cars[i].getId())
                    {
                        system("cls");
                        std::cout << "Car No" << i + 1 << std::endl;
                        cars[i].outputCar();
                        for (int j = i; j < carCount - 1; j++)
                        {
                            cars[j] = cars[j + 1];
                        }
                        carCount--;
                        isfound = true;
                        std::cout << "Car with id " << id_search << "has been deleted." << std::endl;
                        break;
                    }
                }
                if (!isfound)
                {
                    std::cout << "No car with id " << id_search << "found." << std::endl;
                }
                break;
            default:
                system("color 4");
                std::cout << " You choose the wrong option.\n";
                system("pause");
                system("cls");
                system("color A");
                break;
            }
            break;
        case 2:
            std::cout << std::setw(70) << "========== Motorbike system ==========\n\n";
            motobikes->menu();
            std::cout << " \t Choose your option";
            std::cin >> op_moto;
            switch (op_moto)
            {
            case 1:
                system("cls");
                std::cout << "How many motobikes do you want to input:";
                std::cin >> motoCount;
                for (int i = 0; i < motoCount; i++) 
                {
                    std::cout << "Motorbike No" << i + 1 << std::endl;
                    motobikes[i].inputMotorbike();
                }
                break;
            case 2:
                system("cls");
                for (int i = 0; i < motoCount; i++)
                {
                    std::cout << "Motorbike No" << i + 1 << std::endl;
                    motobikes[i].outputMotorbike();
                }
                break;
            case 3:
                system("cls");
                std::cout << "Enter id to search:";
                std::cin >> id_search;
                isfound = false;
                for (int i = 0; i < motoCount; i++)
                {
                    if (id_search == motobikes[i].getId())
                    {
                        system("cls");
                        std::cout << "Motorbike No" << i + 1 << std::endl;
                        motobikes[i].outputMotorbike();
                        isfound = true;
                        break;
                    }
                }
                if (!isfound)
                {
                    std::cout << "No Motorbike with id id" << id_search << "found." << std::endl;
                }
                break;
            case 4: 
                system("cls");
                std::cout << "Enter id to update:";
                std::cin >> id_search;
                isfound = false;
                for (int i = 0; i < motoCount; i++)
                {
                    if (id_search == motobikes[i].getId())
                    {
                        system("cls");
                        std::cout << "Motorbike No" << i + 1 << std::endl;
                        motobikes[i].outputMotorbike();
                        std::cout << "Will update thid information" << std::endl;
                        system("pause");
                        system("cls");
                        motobikes[i].inputMotorbike();
                        isfound = true;
                        break;
                    }
                }
                if (!isfound)
                {
                    std::cout << "No Motorbike with id " << id_search << "found." << std::endl;
                }
                break;
            case 5:
                system("cls");
                std::cout << "Enter id to delete:";
                std::cin >> id_search;
                isfound = false;
                for (int i = 0; i < motoCount; i++)
                {
                    if (id_search == motobikes[i].getId())
                    {
                        system("cls");
                        std::cout << "Motorbike No" << i + 1 << std::endl;
                        motobikes[i].outputMotorbike();
                        for (int j = i; j < motoCount - 1; j++)
                        {
                            motobikes[j] = motobikes[j + 1];
                        }
                        motoCount--; 
                        isfound = true;
                        std::cout << "Motorbike with id " << id_search << "has been deleted." << std::endl;
                        break;
                    }
                }
                if (!isfound)
                {
                    std::cout << "No Motorbike with id " << id_search << "found." << std::endl;
                }
                break;
            default:
                system("color 4");
                std::cout << " You choose the wrong option.\n";
                system("pause");
                system("cls");
                system("color A");
                break;
            }
            break;
        case 3:
            std::cout << std::setw(70) << "========== PassApp system ==========\n\n";
            passApps->menu();
            std::cout << " \t Choose your option";
            std::cin >> op_moto;
            switch (op_moto)
            {
            case 1:
                system("cls");
                std::cout << "How many passApps do you want to input:";
                std::cin >> motoCount;
                for (int i = 0; i < motoCount; i++)
                {
                    std::cout << "PassApp No" << i + 1 << std::endl;
                    passApps[i].inputPassApp();
                }
                break; 
            case 2:
                system("cls");
                for (int i = 0; i < motoCount; i++)
                {
                    std::cout << "PassApp No" << i + 1 << std::endl;
                    passApps[i].outputPassApp();
                }
                break;
            case 3:
                system("cls");
                std::cout << "Enter id to search:";
                std::cin >> id_search;
                isfound = false;
                for (int i = 0; i < motoCount; i++)
                {
                    if (id_search == passApps[i].getId())
                    {
                        system("cls");
                        std::cout << "PassApp No" << i + 1 << std::endl;
                        passApps[i].outputPassApp();
                        isfound = true;
                        break;
                    }
                }
                if (!isfound)
                {
                    std::cout << "No PassApp with id id" << id_search << "found." << std::endl;
                }
                break;
            case 4:
                system("cls");
                std::cout << "Enter id to update:";
                std::cin >> id_search;
                isfound = false;
                for (int i = 0; i < motoCount; i++)
                {
                    if (id_search == passApps[i].getId())
                    {
                        system("cls");
                        std::cout << "PassApp No" << i + 1 << std::endl;
                        passApps[i].outputPassApp();
                        std::cout << "Will update thid information" << std::endl;
                        system("pause");
                        system("cls");
                        passApps[i].inputPassApp(); 
                        isfound = true;
                        break;
                    }
                }
                if (!isfound)
                {
                    std::cout << "No PassApp with id " << id_search << "found." << std::endl;
                }
                break;
            case 5:
                system("cls");
                std::cout << "Enter id to delete:";
                std::cin >> id_search;
                isfound = false;
                for (int i = 0; i < motoCount; i++)
                {
                    if (id_search == passApps[i].getId())
                    {
                        system("cls");
                        std::cout << "PassApp No" << i + 1 << std::endl;
                        passApps[i].outputPassApp();
                        for (int j = i; j < motoCount - 1; j++)
                        {
                            passApps[j] = passApps[j + 1];
                        }
                        motoCount--;
                        isfound = true;
                        std::cout << "PassApp with id " << id_search << "has been deleted." << std::endl;
                        break;
                    }
                }
                if (!isfound) 
                {
                    std::cout << "No PassApp with id " << id_search << "found." << std::endl;
                }
                break;
            default:
                system("color 4");
                std::cout << " You choose the wrong option.\n";
                system("pause");
                system("cls");
                system("color A");
                break;
            }
            break;
        default:
            break;
        }
    } while (op != 4);

    return 0;
}