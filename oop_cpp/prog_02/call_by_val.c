#include <stdio.h>
#include <unistd.h>


int power(int base,int power)
{
    int b=base;
    for(int i=1;i<power;i++)
        base=base*b;

    return base;
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

    result=power(b,p); 

    printf("\n\n%d ^ %d = %d\n",copyb,p,result);
}