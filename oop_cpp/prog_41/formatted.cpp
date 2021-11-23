#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <colour.h>

using namespace std;

int main()
{
    string name;
    float marks;
    system("clear");

    cout<<YELLOW<<"\n| Suchinton       (A2345920063)       |";
    cout<<"\n|-------------------------------------|";
    cout<<"\n| program to implement formatted I/O  |";
    cout<<"\n|-------------------------------------|\n"<<endl;

    cout<<"\nenter name : ";
    getline(cin,name);
    cout<<"enter marks  : ";
    cin>>marks;

    cout.setf(ios::right);
    cout<<"\nname  : ";
    cout<<name;
    
    cout<<"\nmarks : ";
    cout.width(4);
    cout.fill('0');
    cout.precision(3);
    cout<<marks;
}