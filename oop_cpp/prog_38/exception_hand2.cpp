#include <iostream>
#include <colour.h>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    int count;

    system("clear");

    cout<<"\n| Suchinton (A2345920063)              |";
    cout<<"\n|--------------------------------------|";
    cout<<"\n| WAP to implement Exception Handeling |";
    cout<<"\n|--------------------------------------|\n"<<endl;

    cout<<"\nHow many entries do you wish to make? : ";
    cin>>count;

    int *roll_no = new int[count];
    
    char name_s[20];
    float *marks = new float[count];

    char *arr[30];
    for (int i=0; i<count; i++)
    {
        cout<<"\nEnter the student "<<i+1<<" roll no. : ";
        cin>>roll_no[i];
        cout<<"Enter student name (Initial) : ";
        scanf("%s",name_s);
        
        
        
        AGAIN:cout<<"marks : ";
        try
        {
            cin>>marks[i];
            if(marks[i]<=100 && marks[i] >= 0.0)
                throw 0;
            else if(marks[i]<0.0)
                throw -1;
            else if(marks[i]>100)
                throw 1;
        }

        catch (int m)
        {
            if(m==0)
                cout<<GREEN<<"Details add :) !!\n"<<RESET;
            else if(m==1)
            {
                cout<<RED<<"ERROR!! Marks exceed 100, TRY AGAIN :(\n"<<RESET;
                goto AGAIN;
            }
            else if(m==-1)
            {
                cout<<RED<<"ERROR!! Marks are under 0, TRY AGAIN :(\n"<<RESET;
                goto AGAIN;
            }
        }

    }

    for(int i=0 ; i<count ; i++)
    {
        cout<<"\nRoll no. : "<<roll_no[i];
        cout<<"\nName     : "<<name_s[i];
        cout<<"\nMarks    : "<<marks[i];
    }
    delete roll_no;
    delete marks;
}
