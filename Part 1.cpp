#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
class Student
{
    char idnum;
    string name;
    int cpp, comm, maths, grph; //comm = communication skills , grph = computer graphics
    double per;
    char grade;

public:
    void calculate(); // for calculating percentage of student.
    void setdata(); // to take input of info from user.
    void getdata() const;
    int get_idnum() const;
};
void Student ::calculate()
{
    per = (cpp + comm + maths + grph) / 4;
    if (per >= 90)
    {
        grade = 'A1';
    }
    else if (per >= 80)
    {
        grade = 'A2';
    }
    else if (per >= 70)
    {
        grade = 'B1';
    }
    else if (per >= 60)
    {
        grade = 'B2';
    }
    else if (per >= 50)
    {
        grade = 'C1';
    }
    else if (per >= 33)
    {
        grade = 'C2';
    }
    else
    {
        grade = 'D';
    }
};
void Student ::setdata()
{
    cout << "Enter Student's Id Number : ";
    cin >> idnum;
    cout << "\n\nEnter Student's Name : ";
    getline(cin, name);
    cout << "Enter Marks :- ";
    cout << "C++ : ";
    cin >> cpp;
    cout << "Communication Skills : ";
    cin >> comm;
    cout << "Computer Graphic : ";
    cin >> grph;
    cout << "Mathematics : ";
    cin >> maths;
};
void Student ::getdata() const
{
    cout << "Student's Id Number : " << idnum << endl;
    cout << "Student's Name : " << name << endl;
    cout << "Student's Marks ->" << endl;
    cout << "C++ : " << cpp << endl;
    cout << "Commmunication Skills : " << comm << endl;
    cout << "Computer Graphics : " << grph << endl;
    cout << "Mathematics : " << maths << endl;
    cout << "Students's Percentage : " << per << endl;
    cout << "Grade : " << grade << endl;
};

int Student ::get_idnum() const
{
    return idnum;
};

int main()
{
    Student project;
    project.setdata();
    return 0;
}
