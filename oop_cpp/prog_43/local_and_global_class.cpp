#include <iostream>
#include <string.h>
#include <colour.h>

using namespace std;

class cls
{
    public:
        char grade[3], section;
}c;

void students()
{
    class students
    {
        public:
            string name;
            int roll_no;
            float marks;
        


        void set_data()
        {
            cin.ignore();
            cout<<"\nName        : ";
            getline(cin,name);
            cout<<"Roll no.    : ";
            cin>>roll_no;
            cout<<"Marks       : ";
            cin>>marks;
        }

        void show_data()
        {
            cout<<YELLOW<<"\n\nStudent one :";
            cout<<"\nName        : "<<name;
            cout<<"\nRoll no.    : "<<roll_no;
            cout<<"\nMarks       : "<<marks;
        }
    };

    students s1, s2;

    s1.set_data();
    s2.set_data();
    
    cout<<"\nEntered details :\n";
    
    cout<<GREEN<<"\nGrade     : "<<c.grade;
    cout<<"\nSection     : "<<c.section;

    s1.show_data();
    s2.show_data();
}

int main()
{
    system("clear");

    cout<<"\n| Suchinton       (A2345920063)                |";
    cout<<"\n|----------------------------------------------|";
    cout<<"\n| program to implement Global & Local classes  |";
    cout<<"\n|----------------------------------------------|\n"<<endl;

    cls c;

    cout<<GREEN<<"\nGrade         (I-XII) : ";
    scanf("%s",c.grade);
    cout<<"Section (A/a - Z/z)     : ";
    cin>>c.section;

    students();
}