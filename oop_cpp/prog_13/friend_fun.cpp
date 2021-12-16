#include <iostream>
#include <string>

using namespace std;

class rectangle
{
    int length, breadth;

    public:
    rectangle(int length, int breadth)//:length(length),breadth(breadth)
    {
        this ->length = length;
        this ->breadth = breadth;
    }
    friend void calcArea(rectangle s); 
 
};

void calcArea(rectangle s)
{
    cout<<"Area = "<<s.length * s.breadth;
}
int main()
{
    system ("clear");
    
    cout<<"\n| Suchinton (A2345920063)             |";
    cout<<"\n|-------------------------------------|";
    cout<<"\n| Prog. to implement friend functions |";
    cout<<"\n|-------------------------------------|"<<endl;  

    int len, wid;

    cout<<"\nLength of rectangele   : ";
    cin>>len;
    cout<<"width of rectangle     : ";
    cin>>wid;
    
    rectangle s(len,wid);
    calcArea(s);
    return 0;
}
