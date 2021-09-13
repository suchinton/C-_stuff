#include <iostream>
#include <unistd.h>

int no_entries=0;

using namespace std;

class sal_slip
{
    public:
        float salary;
        char name[20];
        static char date_of_issue[11];
        static int branch_no;
}obj[10],temp;

char sal_slip::date_of_issue[11] = {"13/09/2021"};
int sal_slip::branch_no = 128733;

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
            cout<<"\nName: "; cin>>obj[i].name;
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

    cout<<"\nAfter sorting using salary(lowest to maximum)"<<endl;

    for(int n=0; n<=110; n++)
        cout<<"-";
    cout<<endl;

    cout<<"\n\tWorker No. \t\t Name \t\t Branch No. \t\t Salary \t\t Date of issue"<<endl;
    for(int i=0;i<=no_entries;i++)
        {
            cout<<"\n\t"<<i+1<<"\t\t   "<<obj[i].name<<"\t\t   "<<obj[i].branch_no;
            cout<<"\t\t   ₹"<<obj[i].salary<<"/-"<<"\t\t   "<<obj[i].date_of_issue<<endl;
        } 
    
    for(int n=0; n<=110; n++)
        cout<<"-";
    cout<<endl;   
    
    cout<<"\nLowest Salary:";
    cout<<"\nName: "<<obj[0].name<<" Salary: ₹ "<<obj[0].salary<<"/-";
    
    cout<<"\n\nHighest Salary:";
    cout<<"\nName: "<<obj[no_entries].name<<" Salary: ₹ "<<obj[no_entries].salary<<"/-"<<endl;
}

