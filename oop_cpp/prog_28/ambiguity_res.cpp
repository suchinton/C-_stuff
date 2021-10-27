#include <iostream>
#include <string.h>

using namespace std;

class Person 
{
    public:
        char name[30];

        void get_name(void)  
        { 
            cout << "\nEnter name : ";
            scanf("%s",name);   
        }
};

class Faculty : public Person 
{
    public:
        int faculty_id;

        void get_id(void)  
        {
            cout<<"Enter faculty id : ";
            cin>>faculty_id;
        }

        void show(void)
        {
            cout<<"\nFaculty name : "<<name;
            cout<<"\nFaculty id   : "<<faculty_id;
        }
};

class Student : public Person 
{
    public:
        int roll_no;
        void get_id(void) 
        {
            cout<<"\nEnter student id : ";
            cin>>roll_no;
        }

        void show(void)
        {
            cout<<"\nStudent name : "<<name;
            cout<<"\nStudent id   : "<<roll_no;
        }
};

class TA : public Faculty, public Student  
{};

int main()  
{
    system("clear");
    
    int ans;
    TA obj;

    cout<<"\n| Suchinton (A2345920063)                                   |";
    cout<<"\n|-----------------------------------------------------------|";
    cout<<"\n| To implement ambiguity resolution in multiple inheritance |";
    cout<<"\n|-----------------------------------------------------------|"<<endl;

    AGAIN:cout<<"\n1) Faculty";
    cout<<"\n2) Student";
    cout<<"\n3) Exit"<<endl;
    cout<<":";
    cin>>ans;
    switch(ans)
    {
        case 1:
            obj.Faculty::get_name();
            obj.Faculty::get_id();
            
            //system ("clear");
            obj.Faculty::show();

            break;

        case 2:
            obj.Student::get_name();
            obj.Student::get_id();
            
            //system ("clear");
            obj.Student::show();
            break;

        case 3:
            system("exit");
        default:
            cout<<"\nINVALD INPUT, TRY AGAIN ;)";
            goto AGAIN;
    }
}