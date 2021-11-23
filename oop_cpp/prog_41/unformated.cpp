#include <stdio.h>
#include <iostream>
#include <ncurses.h>
#include <string>
#include <colour.h>

using namespace std;

int main()
{
    char c, ch, d[30], e[30];
        
    system("clear");

    cout<<YELLOW<<"\n| Suchinton         (A2345920063)       |";
    cout<<"\n|---------------------------------------|";
    cout<<"\n| program to implement Unformatted I/O  |";
    cout<<"\n|---------------------------------------|\n"<<endl;

    cout<<"enter a char ";
    c = getchar();
    putchar(c);

    cin.ignore();
    cout<<endl<<GREEN<<"enter a string ";
    cin.getline(d,30);
    puts(d);

    cout<<BLUE<<endl<<"enter a string again ";
    cin.getline(e,7);
    for(int i=0; i<7; i++)
    {
        cout.write(e,i);
        cout<<"\n";
    }
}