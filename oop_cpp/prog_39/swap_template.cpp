#include <iostream>
#include <colour.h>

using namespace std;

template <class T>

void Swap(T &x, T &y) {

    T temp;

    temp=x;
    x=y;
    y=temp;
}

int main() {

    int x, y;
    
    system("clear");

    cout<<YELLOW<<"\n| Suchinton (A2345920063)                          |";
    cout<<"\n|--------------------------------------------------|";
    cout<<"\n| Template fn to swap two nos. of diff. data types |";
    cout<<"\n|--------------------------------------------------|\n"<<RESET<<endl;

    cout<<"Enter two numbers :";
    cout<<"\nx : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;

    cout<<GREEN<<"Before Swap:";
    cout<<"\nx value is : "<< x;
    cout<<"\ny value is : "<< y;

    Swap(x, y);

    cout<<YELLOW<<"\n\nAfter Function Templates:\n";
    cout<<"\nx value is : "<<x;
    cout<<"\ny value is : "<<y;

    return 0;
}