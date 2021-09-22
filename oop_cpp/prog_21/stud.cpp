#include <iostream>
#include <unistd.h>

using namespace std;

class student
{
    public:
        int roll_no;
        char name[30];
};

class exam:public student
{
    public:
        int marks[5];
        void get_marks(void);
};

void exam::get_marks(void)
{
    cout<<"\nStudent name   : ";         scanf("%s",name);
    cout<<"\nEnrollment no. : ";         cin>>roll_no;
    cout<<"\nMaths          : ";         cin>>marks[0];
    cout<<"\nEng            : ";         cin>>marks[1];
    cout<<"\nCSE            : ";         cin>>marks[2];
    cout<<"\nPhy            : ";         cin>>marks[3];
    cout<<"\nChem           : ";         cin>>marks[4];
}

class result:public exam
{
    public:
        int total_marks=0;
        void calc_total(void);
};

void result::calc_total(void)
{
    for (int i=0; i<5; i++)
        total_marks += marks[i];
    cout<<"\nTotal marks    : "<<total_marks<<"/500"<<endl;
}

int main()
{
    result s;

    system ("clear");

    cout<<"\n| Suchinton (A2345920063)                                       |";
    cout<<"\n|---------------------------------------------------------------|";
    cout<<"\n| Prog. to impliment inheritance between student, exam & result |";
    cout<<"\n|---------------------------------------------------------------|"<<endl;

    s.get_marks();
    s.calc_total();
}