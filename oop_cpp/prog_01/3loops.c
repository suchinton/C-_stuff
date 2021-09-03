#include <stdio.h>
#include <unistd.h>

int forloop(int);
int whileloop(int);
int do_whileloop(int);

int main()
    {
        system("clear");

        printf("\n| Suchinton (A2345920063)                                       |");
        printf("\n|---------------------------------------------------------------|");
        printf("\n| C Prog to impliment three types of loops (for,while,do-while) |");
        printf("\n|---------------------------------------------------------------|");
        
        printf("\n\n1) Fibonacie series F(n)-[for loop]");
        printf("\n2) Table of given no. n (0-10)-[while]");
        printf("\n3) Display line of length n-[do while]");
        printf("\n4) Exit ");

        int n,a;
        printf("\n\tEnter you choice: ");scanf("%d",&n);

        switch(n)
            {
                case 1:
                    {
                        printf("\nenter your number: ");
                        scanf("%d",&a);
                        forloop(a);
                        break;
                    }
                case 2:
                    {
                        printf("\nenter your number: ");
                        scanf("%d",&a);
                        whileloop(a);
                        break;
                    }
                case 3:
                    {
                        printf("\nenter your number: ");
                        scanf("%d",&a);
                        do_whileloop(a);
                        break;
                    }
                default:
                    {
                        system("exit");
                    }
            }
    }

int forloop(int n)             //fn to check Fibonachi series
    {
        int n1=0, n2=1, nextno=n1+n2;
        printf("\nF(%d)=%d,%d",n,n1,n2);
        for(int i=3; i<=n+1; ++i)
            {
                printf(", %d",nextno);
                n1=n2;
                n2=nextno;
                nextno=n1+n2;
            }
        printf("\n");
    }

int whileloop(int n)            //fn to table of given no. n (0-10)-[while]
    {
        int i=0;
        while(i<=10)
            {
                printf("\n%d X %d = %d\n",n,i,n*i);
                i++;
            }
        printf("\n");
    }

int do_whileloop(int n)         //fn to display line of length n-[do while]
    {
        int i=0;
        do
        {
            printf("-");
            i++;    
        } while (i<=n);
        printf("\n");
        
    }