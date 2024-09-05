#include <iostream>
#include <iomanip>

struct studentType
{
    std::string name;
    double gpa;
    int sID;
    char grade;
};

int main()
{
    system("cls");

    studentType student;
    student.name = "Jester";
    student.sID = 1100;
    student.grade = 'A';
    student.gpa = 4.0;
    studentType *studentPtr;
    studentPtr = &student;

    std::cout << "Student Name  : " << studentPtr->name << '\n';
    std::cout << "Student ID    : " << studentPtr->sID << '\n';
    std::cout << "Student Grade : " << studentPtr->grade << '\n';
    std::cout << "Student GPA   : " << std::fixed << std::setprecision(1) << studentPtr->gpa << '\n';

    return 0;
}