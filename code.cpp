#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// char grades(); // grades
void per(); //percentage acc to marks

class Student

{
    int choice;
    char idnum, course, grade ;
    string name;
    int cpp, comm, maths, grph; //comm = communication skills , grph = computer graphics

public:
    void menu();
    void insert();
    void display();
    void modify();
    void search();
    void del();
    void exits();
    void calculate(); // for calculating percentage of students.
    // void setdata(); // to take input of info from user.
    // void getdata() ;
    // int get_idnum() ;

};


void Student :: menu()        //this will be the startup screen of our prgrm
{   
    start_menu:
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t _____________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t|  STUDENT DATABASE MANAGEMENT SYSTEM |"<<endl;
    cout<<"\t\t\t\t\t\t\t -------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\tPRESS 1 TO ENTER NEW RECORD"<<endl;
    cout<<"\t\t\t\tPRESS 2 TO DISPLAY RECORD"<<endl;
    cout<<"\t\t\t\tPRESS 3 TO MODIFY RECORD"<<endl;
    cout<<"\t\t\t\tPRESS 4 TO SEARCH RECORD"<<endl;
    cout<<"\t\t\t\tPRESS 5 TO DELETE RECORD"<<endl;
    cout<<"\t\t\t\tPRESS 6 TO EXIT"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\tPLEASE CHOOSE YOUR OPTION (1/2/3/4/5/6) : ";
    cin>>choice;

// these are the button programs for the startup menu--->
    char x; 

    switch (choice)
    {
    case 1:
        do
        {
            insert();
            cout<<"DO YOU WANT TO ADD ANOTHER PROGRAM (Y/N): ";
            cin>>x;
        } while (x =='Y' || x =='y');
        if (x=='n' || x=='N')
        {
            system("cls");
            goto start_menu;
        }
        else{
            break;
        }
        
    
    case 2:
        display();
        break;

    // case 3:
    //     modify();
    //     break;

    // case 4:
    //     search();
    //     break;

    // case 5:
    //     del();
    //     break;

    case 6:
        exit(0);
        break;

    default:
        system("cls");
        cout<<"Invalid Input. Please Try Again";
        goto start_menu; 

    }
};


void Student :: insert() //this function will enter the data of the student in a text file.
{

    system("cls");
    cout<<"\t\t\t\t\t\t\t _____________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t|  STUDENT DATABASE MANAGEMENT SYSTEM |"<<endl;
    cout<<"\t\t\t\t\t\t\t -------------------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"ENTER THE NEW RECORD ---->";
    cout<<endl;
    cout<<endl;
    cout << "Enter Student's Id Number : ";
    cin >> idnum;
    cout << "Enter Student's Name : ";
    cin>>name;
    getline(cin >> ws, name);
    cout<<endl;
    cout << "Enter Marks(Out Of 100) :- ";
    cout<<endl;
    cout << "C++ : ";
    cin >> cpp;
    cout << "Communication Skills : ";
    cin >> comm;
    cout << "Computer Graphics : ";
    cin >> grph;
    cout << "Mathematics : ";
    cin >> maths;

    int total = cpp + comm + maths + grph;
    int per = total/4;
    fstream file;
    file.open("student_database.txt" , ios::app | ios:: out);
    file //<<"STUDENT NUMBER COUNT : "<<count++<<endl
        <<"Student's Id Number : " << idnum << endl
        <<"Student's Name : " << name << endl
        <<"Student's Marks (OUT OF 100)->" << endl
        <<"C++ : " << cpp << endl
        <<"Commmunication Skills : " << comm << endl
        <<"Computer Graphics : " << grph << endl
        <<"Mathematics : " << maths << endl
        <<"Total Marks: " <<total<<endl
        <<"Students's Percentage : " << per <<"%"<< endl<<endl;
        
}
void Student :: display()
{

}


int main()
{

    Student project;
    project.menu();

}