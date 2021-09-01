#include <iostream> 
#include <unistd.h>

using namespace std; 

inline int cube(int s) 
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

    cout<<"Suchinton";
    cout<<"\nA2345920063";
    cout<<"\n=============";

    cout<<"\nEnter your number: ";cin>>a;
    cout << "\nThe cube of given number is: " << cube(a); 
    cout << "\nIncrementing a " << inc(a)<<endl;
    return 0; 
}  
