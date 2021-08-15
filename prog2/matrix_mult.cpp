#include<iostream>
#include<stdio.h>
#include <unistd.h>
using namespace std;

int main()
    {
        int r1,r2,c1,c2,sum,i,j;
        system("clear");
        AGAIN:
        cout<<"\n   matrix multipyer";
        cout<<"\n   ****************";

        cout<<"\n\n     Matrix A";
        cout<<"\nNo. of rows for mat. A= ";cin>>r1;
        cout<<"\nNo. of col for mat. A= ";cin>>c1;

        cout<<"\n\n     Matrix B";
        cout<<"\nNo. of rows for mat. B= ";cin>>r2;
        cout<<"\nNo. of col for mat. B= ";cin>>c2;

        if(c1!=r2)
            {
                cout<<"\nERROR!!"<<"\n\n*****please enter the values again*****"<<endl;
                sleep(5);
                system("clear");
                goto AGAIN;
            }

        int A[r1][c1],B[r2][c2],M[r1][c2];

        cout<<"\nEnter elements into mat A"<<endl;
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                {
                    cout<<"\nA["<<i<<","<<j<<"]= "; 
                    scanf("%d",&A[i][j]);
                }
            
        
        cout<<"\nEnter elements into mat B"<<endl;
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                {
                    cout<<"\nB["<<i<<","<<j<<"]= ";
                    scanf("%d",&B[i][j]);
                }

        cout<<"\nElements of mat A are as follows:";
        for(i=0;i<r1;i++)
            {
                cout<<"\n";
                for(j=0;j<c1;j++)
                    cout<<A[i][j]<<"\t";
            }

        cout<<"\nElements of mat B are as follows:";
        for(i=0;i<r2;i++)
            {
                cout<<"\n";
                for(j=0;j<c2;j++)
                    cout<<B[i][j]<<"\t";
            }

        for(i=0;i<r1;++i)
            for(j=0;j<c2;++j)
        {
            M[i][j]=0;
        }

        for(i=0;i<r1;++i)       //storing product of A & B in M
            for(j=0;j<c2;++j)
            for(int k=0;k<c1;++k)
            {
                M[i][j] += A[i][k] * B[k][j];
            }


        cout<<"\nElements of AxB are as follows:";
        for(i=0;i<r1;i++)
            {
                cout<<"\n";
                for(j=0;j<c2;j++)
                    cout<<M[i][j]<<"\t";
            }

        int ans='y';
        cout<<"\n\nwould you like to take a screenshot of the output?(Y/n): ";
        cin>>ans;
        if(ans=='y')
            system("gnome-screenshot");
        
        
    }
