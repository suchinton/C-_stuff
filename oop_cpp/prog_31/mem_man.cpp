#include <iostream>  
using namespace std;

int main()  
{   
    int count;
    
    system("clear");

    cout<<"\n| Suchinton (A2345920063)                      |";
    cout<<"\n|----------------------------------------------|";
    cout<<"\n| WAP to implement Memory Management Operators |";
    cout<<"\n|----------------------------------------------|\n"<<endl;

    cout<<"\nHow many entries do you wish to make? : ";
    cin>>count;

    int *roll_no = new int[count];
    char *name_s = new char[count]; 
    float *marks = new float[count];
    
    //char *arr[30];
    for (int i=0; i<count; i++)
    {
        cout<<"\nEnter the student "<<i+1<<" roll no. : ";     
        cin>>roll_no[i];   
        cout<<"Enter student name (Initial) : ";  
        cin>>name_s[i];
        cout<<"marks : ";
        cin>>marks[i];
    }

    for(int i=0 ; i<count ; i++)
    {
        cout<<"\nRoll no. : "<<roll_no[i];
        cout<<"\nName     : "<<name_s[i];
        cout<<"\nMarks    : "<<marks[i];
    }  
    delete roll_no;
    delete name_s;
    delete marks; 
}  