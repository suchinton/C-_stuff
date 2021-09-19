#include <iostream>
#include <unistd.h>

using namespace std;

class base
{
public:
    int b=1;
    void show(void)
    {
        cout<<"\nfn show="<<b<<endl;
    }
}c1;

class der:public base
{
public:
    int d=2;
    void disp(void)
    {
        cout<<b<<"\t"<<d;
    }
}c2;

int main()
{
    cout<<"\nBase:";
    cout<<"\nb="<<c1.b;
    c1.show();
    cout<<"\n\nDer:";
    cout<<"\nd="<<c2.d;
    c2.disp();
    cout<<"\nInheritance:";
    cout<<"\nb="<<c2.b;
    c1.show();
}