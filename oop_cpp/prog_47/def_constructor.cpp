#include <iostream>

using namespace std;

class Parent
{
    public:
        Parent()
        {
            cout << "Inside base class" << endl;
        }
};
 
class Child : public Parent
{
    public:
        Child()
        {
            cout << "Inside sub class" << endl;
        }
};

int main() 
{ 
    system("clear");

    cout<<"\n| Suchinton       (A2345920063)                                |";
    cout<<"\n|--------------------------------------------------------------|";
    cout<<"\n| program to implement Default Constructors in derived classes |";
    cout<<"\n|--------------------------------------------------------------|\n"<<endl;

    Child obj;
}