#include<iostream>
using namespace std;
int main(){

int choice;
    char idnum, grade, course;
    string name;
    int cpp, comm, maths, grph; //comm = communication skills , grph = computer graphics
    double per;

    cout<<"\t\t\t\t\t\t\t _____________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t|  STUDENT DATABASE MANAGEMENT SYSTEM |"<<endl;
    cout<<"\t\t\t\t\t\t\t -------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout << "Enter Student's Id Number : ";
    cin >> idnum;
    cout<<endl;
    cout << "Enter Student's Name : ";
    
    getline(cin >> ws , name);
    cout<<endl;
    cout << "Enter Marks(Out Of 100) :- ";
    cout<<endl;
    cout << "C++ : ";
    cin >> cpp;
    cout<<endl;
    cout << "Communication Skills : ";
    cin >> comm;
    cout<<endl;
    cout << "Computer Graphics : ";
    cin >> grph;
    cout<<endl;
    cout << "Mathematics : ";
    cin >> maths;
    cout<<endl;
return 0;
}