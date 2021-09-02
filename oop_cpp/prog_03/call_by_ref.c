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
    
    printf("\nRaising number to power of n");
    printf("\n============================");

    printf("\n\nBase num ~> "); scanf("%d",&b);

    copyb=b;

    printf("\nTo the power of~> "); scanf("%d",&p);
    power(&b,&p);

    printf("\n\n%d ^ %d = %d\n",copyb,p,b);
}