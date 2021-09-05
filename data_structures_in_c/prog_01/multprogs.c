#include <stdio.h>
#include <math.h>
#include <unistd.h>

int eve_odd(int);
int p_np(int);
int fact(int);
int table(int);
int pal(int);
int arm(int);
int fibo(int);
int power(int base,int power);

int main()
    {
        system("clear");    //used instead of clrscr();

        printf("\n| Suchinton (A2345920063)                                       |");
        printf("\n|---------------------------------------------------------------|");
        printf("\n| C Prog to implement three types of loops (for,while,do-while) |");
        printf("\n|---------------------------------------------------------------|");
        
        AGAIN: printf("\n\t  Pick an Option");            //menu

		long int n;
        int a; char ch;           
        printf("\n\t=================="); 
        printf("\n\n1) Even or odd");
        printf("\n2) Prime or not");
        printf("\n3) Factorial");
        printf("\n4) Table");
        printf("\n5) Palindrome");
        printf("\n6) Armstrong no");
        printf("\n7) fibonacci series"); 
        printf("\n8) screen shot");
        printf("\n9) clear screen");
        printf("\n10) Exit");
        printf("\n\n\tchoose your option: "); scanf("%d",&a);       
        switch(a)
            {
                case 1:
                    {
                        printf("\nenter your number: "); scanf("%d",&n);
                        eve_odd(n);
                        break;
                    }
                case 2:
                    {
                        printf("\nenter your number: "); scanf("%d",&n);
                        p_np(n);
                        break;
                    }   
                case 3:
                    {
                        printf("\nenter your number: "); scanf("%d",&n);
                        fact(n);
                        break;
                    }
                case 4:
                    {
                        printf("\nenter your number: "); scanf("%d",&n);
                        table(n);
                        break;
                    }
                case 5:
                    {
                        printf("\nenter your number: "); scanf("%d",&n);
                        pal(n);
                        break;
                    }
                case 6:
                    {
                        printf("\nenter your number: "); scanf("%d",&n);
                        arm(n);
                        break;
                    }
                case 7:
                    {
                        printf("\nenter your number: "); scanf("%d",&n);
                        fibo(n);
                        break;
                    }
                case 8:
                    {
                        system("gnome-screenshot");
                        break;
                    }
                case 9:
                    {
                        system("clear");
                        goto AGAIN;
                        break;
                    }
                default:
                    {
                        system("exit");
                        break;
                    }
            }
        sleep(5);           //sleeps for 3 second
        goto AGAIN;
        return 0;
    }

int eve_odd(int n)          //fn to check if a number is odd or even
    {
        if (n%2==0)
            printf("\n%d is an even number",n);
        else
            printf("\n%d is an odd number",n);
    }

int p_np(int n)             //fn to check for prime no.
    {
        int pn=0;
        for(int i=2;i<=n;i++)
            {
                if(n%i==0)
                    pn=pn+i;
            }
        if(pn==n)
            printf("\n%d is a prime no.",n);
        else
            printf("\n%d is not a prime no.",n);
    }

int fact(int n)             //fn to find the factorial of a no.
    {
        int no=n;
        long int f=1;
        for(n;n>0;n--)
            {
                f=f*n;
            }
        printf("\nfactorial of %d is: %d",no,f);
    }

int table(int n)            //fn to display the table of a no. (1 to 10)
    {
        printf("\nTable of %d from 0 to 10",n);
        for(int i=0;i<=10;i++)
            {
                printf("\n%d X %d = %d",n,i,n*i);
            }
        printf("\n");
    }

int pal(int n)              //fn to check for a palindrome
    {
        long int rev=0,last,pali=n;
        while(n>0)
            {
                last=n%10;
                rev=rev*10+last;
                n=n/10;
            }
        if(rev==pali)
            printf("\n%d is a palindrome",pali);
        else
            printf("\n%d is not a palindrome",pali);
    }

int arm(int n)              //fn to check for armstron number 
    {
        int len=0,copy=n,arms=0,last;
        do                      //to find no. of digits 
            {
                copy=copy/10;
                len++;
            }while (copy>0);

        copy=n;

        for(int i=len;i>0;i--)
            {
                last=copy%10;
                copy=copy/10;
                arms=arms+power(last,len);
            }
        if(arms==n)
            printf("\n%d is an armstrong no.",n);
        else 
            printf("\n%d is not an armstrong no.",n);
    }

int fibo(int n)             //fn to check fibonachi series
    {
        int n1=0, n2=1, nextno=n1+n2;
        printf("\nF(%d)= %d,%d",n,n1,n2);
        for(int i=3; i<=n+1; ++i)
            {
                printf(", %d",nextno);
                n1=n2;
                n2=nextno;
                nextno=n1+n2;
            }
        printf("\n");
    }

int power(int base,int power)
{
    int b=base;
    for(int i=1;i<power;i++)
        base=base*b;

    return base;
}
