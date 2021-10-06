#include <iostream>
#include <unistd.h>

using namespace std;

float Area(int r)
{
    return 3.14*r*r;
}

int Area(int l, int w)
{
    return l*w;
}

float Area(int b, int h, int div)
{
    return (b*h)/div;
}

int main()
{
    int n;

    system ("clear");

    cout<<"\n| Suchinton (A2345920063)                           |";
    cout<<"\n|---------------------------------------------------|";
    cout<<"\n| cpp prog to implement function overloading concept|";
    cout<<"\n|---------------------------------------------------|"<<endl;

    cout<<"\n1) Circle";
    cout<<"\n2) Rectangle";
    cout<<"\n3) Triangle";
    
    cout<<"\n\nOption : ";
    cin>>n;

    switch(n)
    {
        case 1:
            int r;
            cout<<"\nCircle";
            cout<<"\n------"<<endl;
            cout<<"\nRadius : ";
            cin>>r;
            cout<<"\nArea of given circle : "<<Area(r);
            break;
        case 2:
            int l, w;
            cout<<"\nRectangle";
            cout<<"\n---------"<<endl;
            cout<<"\nLength : ";
            cin>>l;
            cout<<"Width : ";
            cin>>w;
            cout<<"\nArea of given rectangle : "<<Area(l,w);
            break;
        case 3:
            float b,h,area;
            cout<<"\nTriangle";
            cout<<"\n--------"<<endl;
            cout<<"\nBase : ";
            cin>>b;
            cout<<"Height : ";
            cin>>h;
            area=Area(b,h,2);
            cout<<"\nArea of given triangle : "<<area;
            break;
    }
}