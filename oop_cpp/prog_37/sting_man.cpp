#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout<<"Enter your name : ";
    getline(cin,str);
    cout<<"\nhello "<<str<<" !!";
    cout<<"\nname length     : "<<str.length();
    cout<<"\nname size       : "<<str.size();
    cout<<"\nname capacity   : "<<str.capacity();
    cout<<"\nname max_size   : "<<str.max_size();
    //cout<<""
}