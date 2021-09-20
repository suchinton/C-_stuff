#include <iostream>
#include <unistd.h>

using namespace std;

class base1
{
    public:
    base1()
    {
        cout<<"\nThis is base class 1";
    }
};

class base2
{
    public:
    base2()
    {
        cout<<"\nThis is base class 2";
    }
};

class mult_in:base1,base2
{

};

class mult_2:base1
{
    public:
    mult_2()
    {
        cout<<"\nmultilevel 2";
    }
};

class mult_3:mult_2
{
    public:
    mult_3()
    {
        cout<<"\nmultilevel 3";
    }
};

class hier_in:base1
{
    public:
    hier_in()
    {
        cout<<"\nHier_in example 2";
    }
};

class Hybrid:base2
{
    public:
    Hybrid()
    {
        cout<<"\n Hybrid";
    }
};

int main()
{
    system ("clear");

    cout<<"\n| Suchinton          (A2345920063)                      |";
    cout<<"\n|-------------------------------------------------------|";
    cout<<"\n| Prog to implement diff types of inheritanc in classes |";
    cout<<"\n|-------------------------------------------------------|"<<endl;

    cout<<"\n\n1)Multiple Inheritance:"<<endl;
    mult_in obj1;

    cout<<"\n\n2)Multilevel Inheritance:"<<endl;
    mult_3 obj2;

    cout<<"\n\n3)Hierarchical Inheritance:"<<endl;
    hier_in obj3;

    cout<<"\n\n4)Hybrid Inheritance:"<<endl;
    Hybrid obj4;
    hier_in obj5;

    cout<<"\n";
}