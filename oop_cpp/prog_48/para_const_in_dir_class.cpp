#include <iostream>

using namespace std;

class marks
{
    public:
        string name;
        int rollno;
        int total;
        
        marks(int rollno)
        { this->rollno = rollno; }
};

class student : public marks
{
    public:
        student(int rollno, string name, int total):marks(rollno)
        {
            this->name = name;
            this->total = total;
        }
        void show_data()
        {
            cout<<"\nRoll NO     : "<<rollno;
            cout<<"\nName        : "<<name;
            cout<<"\nTotal Marks : "<<total;
        }
};

int main()
{
    system("clear");

    cout<<"\n| Suchinton       (A2345920063)                                      |";
    cout<<"\n|--------------------------------------------------------------------|";
    cout<<"\n| program to implement Parameterized Constructors in derived classes |";
    cout<<"\n|--------------------------------------------------------------------|\n"<<endl;

    student s1(134,"suchinton",487);
    student s2(423,"khushagra",450);
    
    cout<<"Student 1: \n";
    s1.show_data();
    cout<<"\n\nStudet 2: \n";
    s2.show_data();
}