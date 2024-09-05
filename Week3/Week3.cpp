// product || insert,display,search,update,delete,exit
#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
using namespace std;
// int book;
// int book[10];
// int book[10][5];10*5=50;10=row;5=colum
// index=0;
bool isfound;
std::string username, password;
int op_search, id_search, op_update;
int n, i;
int id[100], id_update, id_tmp;
string name[100];
float price[100], price_update;
int qty[100], qty_update;
string name_search, name_update;

void login();
void Menu();
void insert();
void display();
void search();
void update();
void Delete();

int main()
{
    int option;
    system("cls");
    login();
    system("cls");
    do
    {
    option:
        Menu();
        Again:
        std::cout << "\tChoose the option: ";
        std::cin >> option;
        switch (option)
        {
        case 1:
            insert();
            getch();
            system("cls");
            break;
        case 2:
        if(name[0] == ""){
            std::cout << "\tUndefined Data\n";
            goto Again;
        }
            display();
            getch();
            system("cls");
            break;
        case 3:
            search();
            getch();
            system("cls");
            break;
        case 4:
            update();
            getch();
            system("cls");
            break;
        case 5:
            Delete();
            getch();
            system("cls");
            break;
        case 6:
            exit(0);
            getch();
            system("cls");
            break;
        default:
            std::cout << "\tWrong Option\n";
            getch();
            system("cls");
            goto option;
            break;
        }
    } while (option != 6);
    return 0;
}
void Menu()
{
    cout << "\t=========>>BIU shop<<===========\n";
    cout << "\t===>>1.Insert Product\n";
    cout << "\t===>>2.Display Product\n";
    cout << "\t===>>3.Search Product\n";
    cout << "\t===>>4.Update Product\n";
    cout << "\t===>>5.Delete Product\n";
    cout << "\t===>>6.Exit\n";
}
void insert()
{
    cout << "\t===========>>Insert Product<<===========\n";
    cout << "\tHow many product do you want to input:";
    cin >> n; // n=munber of product
    for (i = 0; i < n; i++)
    {
        cout << "\tNo=" << i + 1 << endl;
        cout << "\tEnter id:";
        cin >> id[i];
        cout << "\tEnter name:";
        cin >> name[i];
        cout << "\tEnter price:";
        cin >> price[i];
        cout << "\tEnter qty:";
        cin >> qty[i];
    }
}
void display()
{
    cout << "\t=============>>Display Product<<================\n";
    for (i = 0; i < n; i++)
    {
        cout << "\tNo=" << i + 1 << endl;
        cout << "\tProduct id=" << id[i] << endl;
        cout << "\tProduct name=" << name[i] << endl;
        cout << "\tProduct price=" << price[i] << "$" << endl;
        cout << "\tProduct qty=" << qty[i] << endl
             << endl;
    }
}
void search()
{
search:
    cout << "\t=============>>Search Product<<================\n";
    cout << "\t===>>1.Search by id\n";
    cout << "\t===>>2.Search by name\n";
    cout << "\tChoose the option:";
    cin >> op_search;
    switch (op_search)
    {

    case 1:
    search1:
        cout << "\tEnter id to search:";
        cin >> id_search;
        isfound = 0;
        for (i = 0; i < n; i++)
        { // n=5
            if (id_search == id[i])
            {
                cout << "\tNo=" << i + 1 << endl;
                cout << "\tProduct id=" << id[i] << endl;
                cout << "\tProduct name=" << name[i] << endl;
                cout << "\tProduct price=" << price[i] << "$" << endl;
                cout << "\tProduct qty=" << qty[i] << endl
                     << endl;
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            cout << "\tSearch Not found!!\n";
            goto search1;
        }
        break;
    case 2:
    search2:
        cout << "\tEnter name to search:";
        cin >> name_search;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (name_search == name[i])
            {
                cout << "\tNo=" << i + 1 << endl;
                cout << "\tProduct id=" << id[i] << endl;
                cout << "\tProduct name=" << name[i] << endl;
                cout << "\tProduct price=" << price[i] << "$" << endl;
                cout << "\tProduct qty=" << qty[i] << endl
                     << endl;
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            cout << "\tSearch Not found!!\n";
            goto search2;

            break;
        default:
            cout << "\tWrong option!!!\n";
            goto search;
        }
    }
}

void update()
{
    std::cout << "\t==========>>Update Product<<==========\n";
update:
    std::cout << "\t===>1.Update Id\n";
    std::cout << "\t===>2.Update Name\n";
    std::cout << "\t===>3.Update Price\n";
    std::cout << "\t===>4.Update Quantity\n";
    std::cout << "\t===>5.Update All\n";
    std::cout << "\tChoose the option: ";
    std::cin >> op_update;
    switch (op_update)
    {
    case 1:
    Id_update:
        std::cout << "\tEnter id to update: ";
        std::cin >> id_update;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (id_update == id[i])
            {
                std::cout << "\tNo=" << i + 1 << std::endl;
                std::cout << "\tProduct id=" << id[i] << std::endl;
                std::cout << "\tEnter new product id: ";
                std::cin >> id[i];
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "\tId update not found!!\n";
            goto Id_update;
        }
        break;
    case 2:
    Name_update:
        std::cout << "\tEnter name to update: ";
        std::cin >> name_update;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (name_update == name[i])
            {
                std::cout << "\tNo=" << i + 1 << std::endl;
                std::cout << "\tProduct name=" << name[i] << std::endl;
                std::cout << "\tEnter new product name: ";
                std::cin >> name[i];
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "\tname update not found!!\n";
            goto Name_update;
        }
        break;
    case 3:
    Price_update:
        std::cout << "\tEnter price to update: ";
        std::cin >> price_update;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (price_update == price[i])
            {
                std::cout << "\tNo=" << i + 1 << std::endl;
                std::cout << "\tProduct price=" << price[i] << std::endl;
                std::cout << "\tEnter new product price: ";
                std::cin >> price[i];
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "\tprice update not found!!\n";
            goto Price_update;
        }
        break;
    case 4:
    Quantity_update:
        std::cout << "\tEnter quantity to update: ";
        std::cin >> qty_update;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (qty_update == qty[i])
            {
                std::cout << "\tNo=" << i + 1 << std::endl;
                std::cout << "\tProduct quantity=" << qty[i] << std::endl;
                std::cout << "\tEnter new product quantity: ";
                std::cin >> qty[i];
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "\tQuantity update not found!!\n";
            goto Quantity_update;
        }
        break;
    case 5:
    All_update:
        std::cout << "\tEnter id to update all: ";
        std::cin >> id_update;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (id_update == id[i])
            {
                cout << "\tNo=" << i + 1 << endl;
                cout << "\tProduct id=" << id[i] << endl;
                cout << "\tProduct name=" << name[i] << endl;
                cout << "\tProduct price=" << price[i] << "$" << endl;
                cout << "\tProduct qty=" << qty[i] << endl
                     << endl;

                std::cout << "\tNo=" << i + 1 << std::endl;
                std::cout << "\tEnter new id: ";
                std::cin >> id[i];
                std::cout << "\tEnter new name: ";
                std::cin >> name[i];
                std::cout << "\tEnter new price: ";
                std::cin >> price[i];
                std::cout << "\tEnter new quantity: ";
                std::cin >> qty[i];
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "\tAll update not found!!\n";
            goto All_update;
        }
        break;
    default:
        std::cout << "\tWrong option\n";
        goto update;
        break;
    }
}

void Delete()
{
Delete1:
    std::cout << "\t==========>>Delete Product<<==========\n";
    std::cout << "\tEnter id to delete product: ";
    std::cin >> id_tmp;//id_tmp = 3
    isfound = 0;
    for (i = 0; i < n; i++)//2,3,4,5
    {// id[4] = {1001,3,4,5};
    //  id[4] =  0    1 2 3
        if (id_tmp == id[i])//id[0]=2,id[1]=3,id[2]
        {
            for (int j = i; j < n - 1; j++)
            {
                id[j] = id[j + 1];
                name[j] = name[j + 1];
                price[j] = price[j + 1];
                qty[j] = qty[j + 1];
            }
            n--;
            isfound = 1;
        }
    }
    if (isfound == 0)
    {
        std::cout << "\tDelete is not complete!!\n";
        goto Delete1;
    }
    else
    {
        std::cout << "\tDelete is completed!!\n";
    }
}

void login()
{
login:
    std::cout << "\t===============>>[L][O][G][I][N]<<===============\n";
    std::cout << "\tEnter UserName: ";
    std::cin >> username;
    std::cout << "\tEnter PassWord: ";
    std::cin >> password;
    if (username == "Virak" && password == "Okay")
    {
        std::cout << "\tWelcome to the system\n";
    }
    else
    {
        std::cout << "\tWrong username or password\n";
        goto login;
    }
}