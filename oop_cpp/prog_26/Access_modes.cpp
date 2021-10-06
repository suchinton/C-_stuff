#include <iostream>
#include <unistd.h>

using namespace std;

class base
{
    private:
        int a=10;
    public:
        int b=12;
    protected:
        int c=14;
};

class derived_A : private base 
{
    public:
        derived_A()
        {
            cout<<"\nDerived A : private base";
            //cout<<"\nprivate : "<< a;     // Private member is inacessible 
            cout<<"\npublic : "<< b;
            cout<<"\nprivate : "<<c<<endl;
        }
};

class derived_B : public base
{
    public:
        derived_B()
       {
            cout<<"\nDerived B : public base";
            //cout<<"\nprivate : "<< a;     // Private member is inacessible 
            cout<<"\npublic : "<< b;
            cout<<"\nprivate : "<<c<<endl;
       }
};
class derived_C : protected base
{
    public:   
        derived_C()
    {   
            cout<<"\nDerived C : protected base";
            //cout<<"\nprivate : "<< a;     // Private member is inacessible 
            cout<<"\npublic : "<< b;
            cout<<"\nprivate : "<<c<<endl;
    }
};

int main()
{
    system ("clear");

    cout<<"\n| Suchinton (A2345920063)                                          |";
    cout<<"\n|------------------------------------------------------------------|";
    cout<<"\n| cpp prog to implement access modes – public, private & protected |";
    cout<<"\n|------------------------------------------------------------------|"<<endl;

    derived_A obj1;
    derived_B obj2;
    derived_C obj3;
}