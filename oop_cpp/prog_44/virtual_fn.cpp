#include <iostream>
using namespace std;
 
class base 
{
    public:
        virtual void print()
        {
            cout << "print base class" << endl;
        }
        void show()
        {
            cout << "show base class" << endl;
        }
};
 
class derived : public base 
{
    public:
        void print()
        {
            cout << "print derived class" << endl;
        }
        void show()
        {
            cout << "show derived class" << endl;
        }
};
 
int main()
{
    system("clear");

    cout<<"\n| Suchinton       (A2345920063)           |";
    cout<<"\n|-----------------------------------------|";
    cout<<"\n| program to implement Virtual Functions  |";
    cout<<"\n|-----------------------------------------|\n"<<endl;

    base* bptr;
    derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
}