#include <iostream>  
using namespace std;

int main()  
{   
    int count;
    
    cout<<"\nHow many entries do you wish to make? : ";
    cin>>count;

    int *roll_no = new int[count];
    char *name_s = new char[count];  
    char name[30];
    float *marks = new float[count];
    
    for (int i=0; i<count; i++)
    {
        cout<<"\nEnter the student "<<i+1<<" roll no. : ";     
        cin>>roll_no[i];   
        cout<<"Enter student name : ";  
        cin>>name_s[i]->name;
        cout<<"\nmarks : ";
        cin>>marks[i];
    }

    for(int i=0 ; i<count ; i++)
    {
        cout<<"\nRoll no. : "<<roll_no[i];
        cout<<"\nName     : "<<name_s[i]->name;
        cout<<"\nMarks    : "<<marks[i];
    }  
    delete roll_no;
    delete name_s;
    delete marks;

    return 0;  
}  