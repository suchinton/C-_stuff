#include <iostream>
#include <unistd.h>
#include <string.h>

int no_entries=0;

using namespace std;

class sal_slip
{
    public:
        float salary;
        char name[20];
        static char date="20/";

}obj[10],temp;


inline int sort()              //for sorting the objects
{
    int i,j;
    for (i=0; i < no_entries ; i++)
        for(j=0; j < no_entries - i ; j++)
        {
            if(obj[j].salary > obj[j+1].salary)
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

    cout<<"\n| Suchinton          (A2345920063)                     |";
    cout<<"\n|------------------------------------------------------|";
    cout<<"\n| Prog to display lowest & highest salaries of workers |";
    cout<<"\n|------------------------------------------------------|"<<endl;

    for(int i=0;i<=10;i++)
        {
            cout<<"\n\tWorker: "<<i+1;
            cout<<"\nName: "; 
            cin>>obj[i].name;
            cout<<"\nSalary (INR): "; cin>>obj[i].salary;
            cout<<"\ncontinue?(y/n) :";cin>>ans;
            if(ans=='y')
                {
                    no_entries++;
                    system("clear");
                    continue;
                }
            else
                break;
        }
    
    sort();

    system("clear");

    cout<<"\nAfter sorting using salary(lowest to maximum)";
    cout<<"\n---------------------------------"<<endl;

    for(int i=0;i<=no_entries;i++)
        {
            cout<<"\n\tWorker: "<<i+1;
            cout<<"\n\nName: "; cout<<obj[i].name;
            cout<<"\nSalary: ₹ "; cout<<obj[i].salary<<"/-"<<endl;
        } 
    
    cout<<"\n-------------------------------------------"<<endl;   
    cout<<"\nYoungest:";
    cout<<"\nName: "<<obj[0].name<<" Salary: ₹ "<<obj[0].salary<<"/-";
    
    cout<<"\n\nOldest:";
    cout<<"\nName: "<<obj[no_entries].name<<" Salary: ₹ "<<obj[no_entries].salary<<"/-"<<endl;
}

