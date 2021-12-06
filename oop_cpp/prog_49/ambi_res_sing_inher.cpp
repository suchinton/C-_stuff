#include<iostream>

using namespace std;

class base_1
{
    public:
        void show()
        {
            cout<<"\nThis is the show() fn of base class 1 ";
        }
};

class base_2
{
    public:
        void show()
        {
            cout<<"\nThis is the show() fn of base class 2 ";
        }
};

class der : public base_1, public base_2
{

};

int main()
{
    system("clear");

    cout<<"\n| Suchinton       (A2345920063)                                   |";
    cout<<"\n|-----------------------------------------------------------------|";
    cout<<"\n| program to implement Ambiguity resolution in Single Inheritance |";
    cout<<"\n|-----------------------------------------------------------------|"<<endl;

    der d;
    d.base_2::show();
    d.base_1::show();
}