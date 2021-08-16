#include<iostream>

#include <unistd.h>

using namespace std;

int forloop(int);
int whileloop(int);
int do_whileloop(int);

int main()
    {
        system("clear");

        cout<<"\n\tTypes of Loops";
        cout<<"\n\t----------------";
        cout<<"\n\n1) Fibonacie series F(n)-[for loop]";
        cout<<"\n2) Table of given no. n (0-10)-[while]";
        cout<<"\n3) Display line of length n-[do while]";
        cout<<"\n4) Exit ";

        int n,a;
        cout<<"\n\tEnter you choice: ";cin>>n;

        switch(n)
            {
                case 1:
                    {
                        cout<<"\nenter your number: ";
                        cin>>a;
                        forloop(a);
                        break;
                    }
                case 2:
                    {
                        cout<<"\nenter your number: ";
                        cin>>a;
                        whileloop(a);
                        break;
                    }
                case 3:
                    {
                        cout<<"\nenter your number: ";
                        cin>>a;
                        do_whileloop(a);
                        break;
                    }
                default:
                    {
                        system("exit");
                    }
            }
        int ans='y';
        cout<<"\n\nwould you like to take a screenshot of the output?(Y/n): ";
        cin>>ans;
        if(ans=='y')
            system("gnome-screenshot");
    }

int forloop(int n)             //fn to check Fibonachi series
    {
        int n1=0, n2=1, nextno=n1+n2;
        cout<<"\nF("<<n<<")= "<<n1<<", "<<n2;
        for(int i=3; i<=n+1; ++i)
            {
                    cout<<", "<<nextno;
                n1=n2;
                n2=nextno;
                nextno=n1+n2;
            }
        cout<<endl;
    }

int whileloop(int n)
    {
        int i=0;
        while(i<=10)
            {
                cout<<"\n"<<n<<"X"<<i<<"= "<<n*i;
                i++;
            }
    }

int do_whileloop(int n)
    {
        int i=0;
        do
        {
            cout<<"-";
            i++;    
        } while (i<=n);
        
    }