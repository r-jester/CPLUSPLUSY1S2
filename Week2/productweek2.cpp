// product || insert, display, search, update, delete, exit
#include <iostream>

bool isfound;
int n, i, op_search, id_search, op_update, new_id, new_qty;
int id[100];
std::string name[100];
float price[100];
float new_price;
int qty[100];
std::string name_search, new_name;
void Menu()
{
    std::cout << "\t===========>>BIU shop<<===========\n";
    std::cout << "\t===>1.Insert Product\n";
    std::cout << "\t===>2.Display Product\n";
    std::cout << "\t===>3.Search Product\n";
    std::cout << "\t===>4.Update Product\n";
    std::cout << "\t===>5.Delete Product\n";
    std::cout << "\t===>6.Exit\n";
}

void insert()
{
    std::cout << "\t===========>>Insert Product<<===========\n";
    std::cout << "\tHow many product do you want to input:";
    std::cin >> n; // number of product
    for (i = 0; i < n; i++)
    {
        std::cout << "\tNo=" << i + 1 << "\n";
        std::cout << "\tEnter id:";
        std::cin >> id[i];
        std::cout << "\tEnter name:";
        std::cin >> name[i];
        std::cout << "\tEnter price:";
        std::cin >> price[i];
        std::cout << "\tEnter quantity:";
        std::cin >> qty[i];
    }
}

void display()
{
    std::cout << "\t===========>>Display Product<<===========\n";
    for (i = 0; i < n; i++)
    {
        std::cout << "\tNo=" << i + 1 << "\n";
        std::cout << "\tProduct id=" << id[i] << std::endl;
        std::cout << "\tProduct name=" << name[i] << std::endl;
        std::cout << "\tProduct price=" << price[i] << "$" << std::endl;
        std::cout << "\tProduct quantity=" << qty[i] << std::endl
                  << '\n';
    }
}

void search()
{
    std::cout << "\t===========>>Search Product<<===========\n";
    std::cout << "\t===>>1.Search by id\n";
    std::cout << "\t===>>2.Search by name\n";
search:
    std::cout << "\tChoose the option:";
    std::cin >> op_search;
    switch (op_search)
    {
    case 1:
    search1:
        std::cout << "\tEnter id to search:";
        std::cin >> id_search;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (id_search == id[i])
            {
                std::cout << "\tNo=" << i + 1 << "\n";
                std::cout << "\tProduct id=" << id[i] << std::endl;
                std::cout << "\tProduct name=" << name[i] << std::endl;
                std::cout << "\tProduct price=" << price[i] << "$" << std::endl;
                std::cout << "\tProduct quantity=" << qty[i] << std::endl
                          << '\n';
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "\tSearch not Found!\n";
            goto search1;
        }
        break;
    case 2:
    search2:
        std::cout << "\tEnter name to search:";
        std::cin >> name_search;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (name_search == name[i])
            {
                std::cout << "\tNo=" << i + 1 << "\n";
                std::cout << "\tProduct id=" << id[i] << std::endl;
                std::cout << "\tProduct name=" << name[i] << std::endl;
                std::cout << "\tProduct price=" << price[i] << "$" << std::endl;
                std::cout << "\tProduct quantity=" << qty[i] << std::endl
                          << '\n';
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "\tSearch not Found!\n";
            goto search2;
        }
        break;
    default:
        std::cout << "\tWrong option\n";
        goto search;
        break;
    }
}

void update()
{
    std::cout << "\t===========>>Update Product<<===========\n";
    std::cout << "\tWhat Product do you want to update\n";
update:
    std::cout << "\t==>1.Search Product by id to update\n";
    std::cout << "\t==>2.Search Product by name to update\n";
    std::cout << "\tChoose the option: ";
    std::cin >> op_update;
    switch (op_update)
    {
    case 1:
    search1:
        std::cout << "\tEnter id to search:";
        std::cin >> id_search;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (id_search == id[i])
            {
                std::cout << "\tNo=" << i + 1 << "\n";
                std::cout << "\tProduct id=" << id[i] << std::endl;
                std::cout << "\tProduct name=" << name[i] << std::endl;
                std::cout << "\tProduct price=" << price[i] << "$" << std::endl;
                std::cout << "\tProduct quantity=" << qty[i] << std::endl
                          << '\n';
            update1:
                std::cout << "\tWhat do you want to update[\"1.id\" \"2.name\" \"3.price\" \"4.quantity\"]:";
                std::cin >> op_update;
                switch (op_update)
                {
                case 1:
                    std::cout << "\t===>update id:";
                    std::cin >> new_id;
                    id[i] = new_id;
                    break;
                case 2:
                    std::cout << "\t===>update name:";
                    std::cin >> new_name;
                    name[i] = new_name;
                    break;
                case 3:
                    std::cout << "\t===>update price:";
                    std::cin >> new_price;
                    price[i] = new_price;
                    break;
                case 4:
                    std::cout << "\t===>update quantity:";
                    std::cin >> new_qty;
                    qty[i] = new_qty;
                    break;
                default:
                    std::cout << "\tWrong option!\n";
                    goto update1;
                    break;
                }
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "\tSearch not found!\n";
            goto search1;
        }
        break;
    case 2:
    search2:
        std::cout << "\tEnter name to search:";
        std::cin >> name_search;
        isfound = 0;
        for (i = 0; i < n; i++)
        {
            if (name_search == name[i])
            {
                std::cout << "\tNo=" << i + 1 << "\n";
                std::cout << "\tProduct id=" << id[i] << std::endl;
                std::cout << "\tProduct name=" << name[i] << std::endl;
                std::cout << "\tProduct price=" << price[i] << "$" << std::endl;
                std::cout << "\tProduct quantity=" << qty[i] << std::endl
                          << '\n';
            update2:
                std::cout << "\tWhat do you want to update[\"1.id\" \"2.name\" \"3.price\" \"4.quantity\"]:";
                std::cin >> op_update;
                switch (op_update)
                {
                case 1:
                    std::cout << "\t===>update id:";
                    std::cin >> new_id;
                    id[i] = new_id;
                    break;
                case 2:
                    std::cout << "\t===>update name:";
                    std::cin >> new_name;
                    name[i] = new_name;
                    break;
                case 3:
                    std::cout << "\t===>update price:";
                    std::cin >> new_price;
                    price[i] = new_price;
                    break;
                case 4:
                    std::cout << "\t===>update quantity:";
                    std::cin >> new_qty;
                    qty[i] = new_qty;
                    break;
                default:
                    std::cout << "\tWrong option!\n";
                    goto update2;
                    break;
                }
                isfound = 1;
                break;
            }
        }
        if (isfound == 0)
        {
            std::cout << "\tSearch not found!\n";
            goto search2;
        }
        break;
    default:
        std::cout << "\tWrong Option!\n";
        goto update;
        break;
    }
}

int main()
{
    system("cls");
    // Menu();
    insert();
    search();
    update();
    display();
    return 0;
}