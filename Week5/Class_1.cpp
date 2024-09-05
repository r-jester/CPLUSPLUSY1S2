// class
#include <iostream>

class person
{
public:
    int id;
    std::string name;
    char gender;
    int age;
    std::string address;
    std::string dob;
    std::string contact;
};

int main()
{
    system("cls");

    person obj;
    obj.id = 1010;
    obj.name = "Dara";
    obj.age = 35;
    obj.gender = 'M';
    obj.dob = "03/07/1989";
    obj.address = "PhnomPenh";
    obj.contact = "010277543";

    std::cout << "Person ID Card: " << obj.id << '\n';
    std::cout << "Person Name: " << obj.name << "\n";
    std::cout << "Person Age: " << obj.age << '\n';
    std::cout << "Person Gender: " << obj.gender << '\n';
    std::cout << "Person Date of Birth: " << obj.dob << "\n";
    std::cout << "Person Address: " << obj.address << '\n';
    std::cout << "Person Contact: " << obj.contact << '\n';

    return 0;
}