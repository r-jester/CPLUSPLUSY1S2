#include <iostream>
using namespace std;
class Tearcher
{
private:
    int id;
    string name;
    int age;
    char gender;
    char gread;
    bool result;

public:
    void set()
    {
        cout << "\tEnter id:";
        cin >> id;
        cout << "\tEnter Name:";
        cin >> name;
        cout << "\tEnter gender:";
        cin >> gender;
        cout << "\tEnter age:";
        cin >> age;
    }
    void get()
    {
        cout << "\tID=" << id << endl;
        cout << "\tName=" << name << endl;
        cout << "\tGender=" << gender << endl;
        cout << "\tAge=" << age << endl;
    }
};
class Student : public Tearcher
{ // derive class
protected:
    float score1, score2, score3, score4, score5;
    float total, average;

public:
    void sets()
    {
        set();
        cout << "\tEnter score1:";
        cin >> score1;
        cout << "\tEnter score2:";
        cin >> score2;
        cout << "\tEnter score1:";
        cin >> score3;
        cout << "\tEnter score4:";
        cin >> score4;
        cout << "\tEnter score5:";
        cin >> score5;
        total = score1 + score2 + score3 + score4 + score5;
        average = total / 5;
    }
    void gets()
    {
        get();
        cout << "\tTotal Score=" << total << endl;
        cout << "\tAverage=" << average << endl;
    }
};
class result : public Student
{
public:
    void grade()
    {
        if (average >= 90 && average <= 100)
        {
            cout << "\tGrade A";
        }
        else if (average >= 80 && average < 90)
        {
            cout << "\tGrade B";
        }
        else if (average >= 70 && average < 80)
        {
            cout << "\tGrade C";
        }
        else if (average >= 60 && average < 70)
        {
            cout << "\tGrade D";
        }
        else if (average >= 50 && average < 60)
        {
            cout << "\tGrade E";
        }
        else if (average < 50 && average > 0)
        {
            cout << "\tGrade F";
        }
        else
        {
            cout << "\tWrong Input!\n";
        }
    }
};
int main()
{
    system("cls");
    result obj;
    obj.sets();
    obj.gets();
    obj.grade();
    return 0;
}