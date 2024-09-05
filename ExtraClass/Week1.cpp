// insert display search update delete exit
#include <iostream>
#include <string>
#include <conio.h>

bool isfound;
int id[100], num, i, op, id_search, j;
std::string name[100], username, password, name_search;
char gender[100], gender_search;
std::string contact[100], contact_search;

void login();
void menu();
void insert();
void display();
void search();
void update();
void Delete();

int main()
{
    system("cls");
    login();
    getch();
    system("cls");
    do
    {
        menu();
        std::cin >> op;
        switch (op)
        {
        case 1:
            insert();
            getch();
            system("cls");
            break;
        case 2:
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
            system("cls");
            std::cout << "Wrong Option!!\n";
            break;
        }
    } while (op != 6);

    return 0;
}

void login()
{
login:
    std::cout << "===============>>Login<<===============\n";
    std::cout << "Enter Username: ";
    std::getline(std::cin, username);
    std::cout << "Enter Password: ";
    std::getline(std::cin, password);
    if (username == "virak" && password == "okay")
    {
        system("cls");
        std::cout << "Welcome to the system!!\n";
    }
    else
    {
        system("cls");
        std::cout << "Please Try Again!\n";
        goto login;
    }
}

void menu()
{
    std::cout << "===============>>Students Information<<===============\n";
    std::cout << "1. Insert Information Students\n";
    std::cout << "2. Display Information Students\n";
    std::cout << "3. Search Information Students\n";
    std::cout << "4. Update Information Students\n";
    std::cout << "5. Delete Information Students\n";
    std::cout << "6. Exit\n";
}

void insert()
{
    std::cout << "===============>>Insert Informations Student<<===============\n";
    std::cout << "How many Student do you want to insert: ";
    std::cin >> num;
    for (i = 0; i < num; i++)
    {
        std::cout << "Enter Student ID: ";
        std::cin >> id[i];
        std::cout << "Enter Student Name: ";
        std::cin.ignore();
        std::getline(std::cin, name[i]);
        std::cout << "Enter Student Gender: ";
        std::cin >> gender[i];
        while (getchar() != '\n')
            ;
        std::cout << "Enter Student Contact: ";
        std::getline(std::cin, contact[i]);
    }
}

void display()
{
    std::cout << "===============>>Display Informations Student<<===============\n";
    for (i = 0; i < num; i++)
    {
        std::cout << "Student ID: " << id[i] << "\n";
        std::cout << "Student Name: " << name[i] << "\n";
        std::cout << "Student Gender: " << gender[i] << "\n";
        std::cout << "Student Contact: " << contact[i] << "\n\n";
    }
}

void search()
{
search:
    std::cout << "===============>>Search Informations Student<<===============\n";
    std::cout << "1. Search By ID\n";
    std::cout << "2. Search By Name\n";
    std::cin >> op;
    switch (op)
    {
    case 1:
    search1:
        std::cout << "Enter ID to search: ";
        std::cin >> id_search;
        isfound = 0;
        for (i = 0; i < num; i++)
        {
            if (id_search == id[i])
            {
                std::cout << "Student ID: " << id[i] << "\n";
                std::cout << "Student Name: " << name[i] << "\n";
                std::cout << "Student Gender: " << gender[i] << "\n";
                std::cout << "Student Contact: " << contact[i] << "\n";
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "Id search not found!\n";
            goto search1;
        }
        break;
    case 2:
    search2:
        std::cout << "Enter Name to search: ";
        std::cin >> name_search;
        isfound = 0;
        for (i = 0; i < num; i++)
        {
            if (name_search == name[i])
            {
                std::cout << "Student ID: " << id[i] << "\n";
                std::cout << "Student Name: " << name[i] << "\n";
                std::cout << "Student Gender: " << gender[i] << "\n";
                std::cout << "Student Contact: " << contact[i] << "\n";
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "Id search not found!\n";
            goto search2;
        }
        break;
    default:
        std::cout << "Wrong Option!\n";
        goto search;
        break;
    }
}

void update()
{
update:
    std::cout << "===============>>Update Informations Student<<===============\n";
    std::cout << "1. Update Student ID\n";
    std::cout << "2. Update Student Name\n";
    std::cout << "3. Update Student Gender\n";
    std::cout << "4. Update Student Contact\n";
    std::cout << "5. Update All\n";
    std::cin >> op;
    switch (op)
    {
    case 1:
    update1:
        std::cout << "Enter ID to Update: ";
        std::cin >> id_search;
        isfound = 0;
        for (i = 0; i < num; i++)
        {
            if (id_search == id[i])
            {
                std::cout << "Enter new ID: ";
                std::cin >> id[i];
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            system("cls");
            std::cout << "ID not found!\n";
            goto update1;
        }
        break;
    case 2:
    update2:
        std::cout << "Enter Name to Update: ";
        std::cin >> name_search;
        isfound = 0;
        for (i = 0; i < num; i++)
        {
            if (name_search == name[i])
            {
                std::cout << "Enter new Name: ";
                std::cin.ignore();
                std::getline(std::cin, name[i]);
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            system("cls");
            std::cout << "Name not found!\n";
            goto update2;
        }
        break;
    case 3:
    update3:
        std::cout << "Enter Gender to Update: ";
        std::cin >> gender_search;
        isfound = 0;
        for (i = 0; i < num; i++)
        {
            if (gender_search == gender[i])
            {
                std::cout << "Enter new Gender: ";
                std::cin >> gender[i];
                while (getchar() != '\n')
                    ;
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            system("cls");
            std::cout << "Name not found!\n";
            goto update3;
        }
        break;
    case 4:
    update4:
        std::cout << "Enter Contact to Update: ";
        std::cin >> contact_search;
        isfound = 0;
        for (i = 0; i < num; i++)
        {
            if (contact_search == contact[i])
            {
                std::cout << "Enter new Contact: ";
                std::getline(std::cin, contact[i]);
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            system("cls");
            std::cout << "Name not found!\n";
            goto update3;
        }
        break;
    case 5:
    update5:
        std::cout << "Enter id to update all: ";
        std::cin >> id_search;
        isfound = 0;
        for (i = 0; i < num; i++)
        {
            if (id_search == id[i])
            {
                std::cout << "Student ID: " << id[i] << "\n";
                std::cout << "Student Name: " << name[i] << "\n";
                std::cout << "Student Gender: " << gender[i] << "\n";
                std::cout << "Student Contact: " << contact[i] << "\n\n";
                std::cout << "Enter New ID: ";
                std::cin >> id[i];
                std::cout << "Enter New Name: ";
                std::cin.ignore();
                std::getline(std::cin, name[i]);
                std::cout << "Enter New Gender: ";
                std::cin >> gender[i];
                while (getchar() != '\n')
                    ;
                std::cout << "Enter New Contact: ";
                std::getline(std::cin, contact[i]);
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            system("cls");
            std::cout << "Id not found!\n";
            goto update5;
        }
        break;
    default:
        system("cls");
        std::cout << "Wrong option!\n";
        goto update;
        break;
    }
}

void Delete()
{
Delete:
    std::cout << "===============>>Delete Informations Student<<===============\n";
    std::cout << "1. Delete by id\n";
    std::cout << "2. Delete by name\n";
    std::cin >> op;
    switch (op)
    {
    case 1:
    Delete1:
        std::cout << "Enter id to delete: ";
        std::cin >> id_search;
        isfound = 0;
        for (i = 0; i < num; i++)
        {
            if (id_search == id[i])
            {
                std::cout << "Delete is completed!\n";
                for (j = i; j < num - 1; j++)
                {
                    id[j] = id[j + 1];
                    name[j] = name[j + 1];
                    gender[j] = gender[j + 1];
                    contact[j] = contact[j + 1];
                }
                num--;
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            system("cls");
            std::cout << "ID not found!\n";
            goto Delete1;
        }
        break;
    case 2:
    Delete2:
        std::cout << "Enter name to delete: ";
        std::cin >> name_search;
        isfound = 0;
        for (i = 0; i < num; i++)
        {
            if (name_search == name[i])
            {
                std::cout << "Delete is completed!\n";
                for (j = i; j < num - 1; j++)
                {
                    id[j] = id[j + 1];
                    name[j] = name[j + 1];
                    gender[j] = gender[j + 1];
                    contact[j] = contact[j + 1];
                }
                num--;
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            system("cls");
            std::cout << "Name not found!\n";
            goto Delete2;
        }
        break;
    default:
        system("cls");
        std::cout << "Wrong Option!\n";
        goto Delete;
        break;
    }
}