#include <iostream>
#include <iomanip>

struct student{
    int id;
    std::string firstname;
    std::string lastname;
    char gender;
    float score;
    double gpa;
};

int main(){
    system("cls");

    std::cout << std::fixed << std::showpoint << std::setprecision(2);

    student newStudent;
    newStudent.id = 1001;
    newStudent.firstname = "Rak";
    newStudent.lastname = "Vi";
    newStudent.gender = 'M';
    newStudent.score = 100;
    newStudent.gpa = 4.0;

    std::cout << "Student Id: " << newStudent.id << "\n";
    std::cout << "Student Firstname: " << newStudent.firstname << "\n";
    std::cout << "Student Lastname: " << newStudent.lastname << "\n";
    std::cout << "Student Name: " << newStudent.lastname << " " << newStudent.firstname << "\n";
    std::cout << "Student Gender: " << newStudent.gender << "\n";
    std::cout << "Student Score: " << newStudent.score << "\n";
    std::cout << "Student GPA: " << newStudent.gpa << "\n";

    return 0;
}