
#include <iostream>
#include <string>
#include <string.h>
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

    cout<<"enter a char : ";
    c = getchar();
    cout<<"Entered char : ";
    putchar(c);

    cin.ignore();
    cout<<endl<<GREEN<<"enter a string ";
    cin.getline(d,30);
    cout<<"Entered string : ";
    puts(d);

    cout<<BLUE<<endl<<"enter a string again ";
    cin.getline(e,10);
    for(int i=0; i<=strlen(e); i++)
    {
        cout.write(e,i);
        cout<<"\n";
    }
}