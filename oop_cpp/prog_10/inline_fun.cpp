#include <iostream> 
#include <unistd.h>

using namespace std; 

inline double cube(int s) 
{ 
    return s*s*s; 
} 
inline int inc(int a) 
{ 
    return ++a; 
}
int main() 
{ 
    int a;

    system("clear");

    cout<<"\n| Suchinton (A2345920063)                                  |";
    cout<<"\n|----------------------------------------------------------|";
    cout<<"\n|c++ prog to implement inline function (returns n^3 & ++n) |";
    cout<<"\n|----------------------------------------------------------|"<<endl;

    cout<<"\nEnter your number: ";cin>>a;
    cout << "\nThe cube of given number is: " << cube(a); 
    cout << "\nIncrementing a " << inc(a)<<endl;
    return 0; 
}  
