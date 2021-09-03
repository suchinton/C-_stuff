#include <stdio.h>
#include <unistd.h>


void power(int *b,int *p)
{
    int temp=*b,base=*b,power=*p;
    for(int i=1;i<power;i++)
        base=base*temp;
    *b=base;
}



int main()
{
    int p,result,b,copyb;

    system("clear");
    
    printf("\n| Suchinton (A2345920063)                              |");
    printf("\n|------------------------------------------------------|");
    printf("\n| C Prog to impliment call by ref. (returns base^power)|");
    printf("\n|------------------------------------------------------|");

    printf("\n\nBase num ~> "); scanf("%d",&b);

    copyb=b;

    printf("\nTo the power of~> "); scanf("%d",&p);
    power(&b,&p);

    printf("\n\n%d ^ %d = %d\n",copyb,p,b);
}