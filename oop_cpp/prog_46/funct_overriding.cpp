#include <iostream>

using namespace std;

class Base 
{
   public:
        void print() 
        {
            cout<<"Base Function"<<endl;
        }
};

class Derived : public Base 
{
   public:
        void print() 
        {
            cout<<"Derived Function\n"<<endl;
        }
};

int main() 
{
    system("clear");

    cout<<"\n| Suchinton       (A2345920063)             |";
    cout<<"\n|-------------------------------------------|";
    cout<<"\n| program to implement Function Overriding  |";
    cout<<"\n|-------------------------------------------|\n"<<endl;  

    Derived derived1;
    derived1.print();
}
