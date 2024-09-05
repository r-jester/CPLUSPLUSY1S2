#include <iostream>
using namespace std;

struct studentType
{
  int id;
  string name;
  int age;
  char gender;
  float s1, s2, s3, s4, s5;
  float total_score;
  float avg;
  char grade;
  
  void input(){
        std::cout << "=======>>Insert<<=======" << std::endl;
    cout << "Enter Id: "; cin >> id;
    cout << "Enter Name: "; cin >> name;
    cout << "Enter Age: "; cin >> age;
    cout << "Enter Gender: "; cin >> gender;
    cout << "Enter Score1: "; cin >> s1;
    cout << "Enter Score2: "; cin >> s2;
    cout << "Enter Score3: "; cin >> s3;
    cout << "Enter Score4: "; cin >> s4;
    cout << "Enter Score5: "; cin >> s5;
    total_score = s1 + s2 + s3 + s4 + s5;
    avg = total_score/5;
    if(avg<=100&&avg>=90){
      grade='A';
    }
    else if(avg<90&&avg>=80){
      grade = 'B';
    }
    else if(avg<80&&avg>=70){
      grade= 'C';
    }
    else if(avg<70&&avg>=60){
      grade= 'D';
    }
    else if(avg<60&&avg>=50){
      grade ='E';
    }
    else{
      grade ='F';
    }
  }
  void output(){
    std::cout << "=======>>Display<<=======" << std::endl;
      std::cout << "Id: " << id << std::endl;
  std::cout << "Name: " << name << std::endl;
  std::cout << "Age: " << age << std::endl;
  std::cout << "Gender: " << gender << std::endl;
  std::cout << "Total Score: " << total_score << std::endl;
  std::cout << "Average: " << avg << std::endl;
  std::cout << "Grade: " << grade << std::endl;
  }
  void outputadd(){
        std::cout << "=======>>Display<<=======" << std::endl;
      std::cout << "Id: " << &id << std::endl;
  std::cout << "Name: " << &name << std::endl;
  std::cout << "Age: " << &age << std::endl;
  std::cout << "Gender: " << &gender << std::endl;
  std::cout << "Total Score: " << &total_score << std::endl;
  std::cout << "Average: " << &avg << std::endl;
  std::cout << "Grade: " << &grade << std::endl;
  }
};

int main() 
{
  studentType student;
  studentType* studentPtr;
  studentPtr = &student;
  
  studentPtr->input();
  studentPtr->output();
  studentPtr->outputadd();

    return 0;
}