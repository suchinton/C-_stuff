#include<iostream>
#include <unistd.h>

using namespace std;

int main()
    {
        system("clear");

        cout<<"\nSorting Elements (Bubble)";
        cout<<"\n-------------------------";

        int len;
        cout<<"\nEnter no. of elements you wish to enter: ";
        cin>>len;

        int A[len];

        for(int i=0;i<len;i++)
            {
                cout<<"\n\nElement "<<i+1<<" is: ";
                cin>>A[i];
            }

        system("clear");
        cout<<"\n\nBefore Sorting: "<<endl;
        for(int i=0;i<len;i++)
            cout<<A[i]<<" ";

        int i,j;
        for(i=0;i<len-1;i++)
            for(j=0;j<len-i-1;j++)
                {
                    if(A[j]>A[j+1])
                        {
                            int temp=A[j];
                            A[j]=A[j+1];
                            A[j+1]=temp;
                        }
                }

        cout<<"\n\nAfter sorting"<<endl;
        for(int i=0;i<len;i++)
            cout<<A[i]<<" ";
        
        int ans;
        cout<<"\n\nwould you like to take a screenshot of the output?(Y/n): ";
        cin>>ans;
        if(ans=='y')
            system("gnome-screenshot");
    }

