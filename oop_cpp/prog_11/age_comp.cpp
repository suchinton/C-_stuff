#include <iostream>
#include <unistd.h>
#include <string.h>

int no_entries=0;

using namespace std;

class person
{
    public:
        int age;
        char name[20];

}obj[10],temp;

inline int sort()              //for sorting the objects
{
    int i,j;
    for (i=0; i < no_entries ; i++)
        for(j=0; j < no_entries - i ; j++)
        {
            if(obj[j].age > obj[j+1].age)
            {
                temp = obj[j];
                obj[j] = obj[j + 1];
                obj[j+1] = temp;
            }
        }
}

int main()
{
    system("clear");

    char ans;

    cout<<"\n| Suchinton          (A2345920063)          |";
    cout<<"\n|-------------------------------------------|";
    cout<<"\n| Prog to display youngest & oldest entries |";
    cout<<"\n|-------------------------------------------|"<<endl;

    for(int i=0;i<=10;i++)
        {
            cout<<"\n\tEntry: "<<i+1;
            cout<<"\nName: "; 
            cin>>obj[i].name;
            cout<<"Age: "; cin>>obj[i].age;
            cout<<"continue?(y/n) :";cin>>ans;
            if(ans=='y')
                {
                    no_entries++;
                    //system("clear");
                    continue;
                }
            else
                break;
        }
    
    sort();

    //system("clear");

    cout<<"\nAfter sorting(youngest to oldest)";
    cout<<"\n---------------------------------"<<endl;

    for(int i=0;i<=no_entries;i++)
        {
            cout<<"\n\tEntery: "<<i+1;
            cout<<"\n\nName: "; cout<<obj[i].name;
            cout<<"\nAge: "; cout<<obj[i].age<<endl;
        } 
    
    cout<<"\n-------------------------------------------"<<endl;   
    cout<<"\nYoungest:";
    cout<<"\nName: "<<obj[0].name<<" Age: "<<obj[0].age;
    
    cout<<"\n\nOldest:";
    cout<<"\nName: "<<obj[no_entries].name<<" Age: "<<obj[no_entries].age<<endl;
}


