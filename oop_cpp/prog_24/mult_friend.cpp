#include <iostream>
#include <unistd.h>

using namespace std;

class two;
class one;

void add(one, two);

class one
{
    private:
    public:
        int A;
        friend void add(one,two);
};

class two
{
    private:
    public:
        int B;
        friend void add(one,two);
};

void add (one A, two B)
{
    cout<<"A + B = "<<A.A+B.B<<endl;
}

int main()
{
    system ("clear");
    
    cout<<"\n| Suchinton (A2345920063)            |";
    cout<<"\n|------------------------------------|";
    cout<<"\n| Prog. to implement  mult friend fn |";
    cout<<"\n|------------------------------------|"<<endl;   

    one A;
    two B;

    cout<<"A = ";     cin>>A.A;
    cout<<"B = ";     cin>>B.B;  
    add(A,B);
}