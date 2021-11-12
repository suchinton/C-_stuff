#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string name1, name2; 
    char title[5];
    
    system("clear");

    cout<<"\n| Suchinton (A2345920063)        |";
    cout<<"\n|--------------------------------|";
    cout<<"\n| To implement String operations |";
    cout<<"\n|--------------------------------|"<<endl;

    cout<<"Enter your first name           : ";
    getline(cin,name1);
    cout<<"\nhello "<<name1<<" !!";
    cout<<"\nname length                   : "<<name1.length();
    cout<<"\nname size                     : "<<name1.size();
    cout<<"\nname capacity                 : "<<name1.capacity();
    cout<<"\nname max_size                 : "<<name1.max_size();
    name1.resize(15);
    cout<<"\nname resized to 15            : "<<name1;
    
    cout<<"\nPlease enter your second name : ";
    getline(cin,name2);
    
    name1.insert(name1.size()-1," ");
    name1.append(name2);

    name1.insert(0,"     ");

    cout<<"\nMr. / Mrs./ Ms.               : ";
    scanf("%s",title);

    if(strcmp(title,"mr.")==0)
        name1.replace(0,4,"Mr.");
    else if (strcmp(title,"mrs.")==0)
        name1.replace(0,3,"Mrs.");
    else if (strcmp(title,"mr.")==0)
        name1.replace(0,4,"Ms.");
    
    cout<<"\nfull name is                  : ";
    
    string::iterator it;
    for ( it = name1.begin(); it != name1.end(); it++)
    {
        cout<<*it;
    }
    cout<<"\nfull name in reverse          : ";
    string::reverse_iterator itl;
    for( itl = name1.rbegin(); itl != name1.rend(); itl++)
    {
        cout<<*itl;
    }
    
    name1.swap(name2);
    name1.push_back('!');
    cout<<"\nfirst 1st has been swapped with 2nd ";
    cout<<"\nyour second name is           : "<<name1;
    name1.pop_back();
    cout<<"\nafte poping from back         : "<<name1;
     
    name1.clear();
    cout<<"\nfirst name cleared !!";
}