#include <iostream>
#include <colour.h>

using namespace std;

template <class T>

class myclass 
{
    public:
        T a, b;
        myclass (T first, T second)
        {
            a=first; 
            b=second;
        }
        T getMaxval ()
        {
            return (a>b? a : b);
        }
};

int main () 
{
    int a,b;
    
    system("clear");

    cout<<YELLOW<<"\n| Suchinton (A2345920063)              |";
    cout<<"\n|--------------------------------------|";
    cout<<"\n| program to implement Class Template  |";
    cout<<"\n|--------------------------------------|\n"<<RESET<<endl;

    cout<<"\nEnter integer a : ";
    cin>>a;
    cout<<"Enter integer b : ";
    cin>>b;
    myclass <int> myobject (a, b);
    cout<<GREEN<<"Maximum of "<<a<<" and "<<b<<" = "<<myobject.getMaxval()<<RESET<<endl;
    
    char c,d;
    cout<<"\nEnter char c : ";
    cin>>c;
    cout<<"Enter char d : ";
    cin>>d;
    myclass <char> mycharobject(c,d);
    cout<<GREEN<<"Maximum of "<<c<<" and "<<d<<" = "<<mycharobject.getMaxval()<<RESET<<endl;
}