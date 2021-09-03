#include <stdio.h>
#include <unistd.h>

int main () 
{
    int len;

    system ("clear");

    printf("\n| Suchinton (A2345920063)                |");
    printf("\n|----------------------------------------|");
    printf("\n| C Prog to impliment pointer arithmetic |");
    printf("\n|----------------------------------------|\n");
    printf("\nEnter the length of the array~> ");scanf("%d",&len);
    
    int  arr[len];
    int  i, *ptr;

    for(i=0; i<len; i++)
        {
            printf("\nElement %d = ",i+1);
            scanf("%d",&arr[i]);
        }
    ptr = arr;
	
    system ("clear");

    for (i=0; i<len; i++) 
    { 
        printf("\nAddress of arr[%d] = %x\n", i+1, ptr );
        printf("Value of arr[%d] = %d\n", i+1, *ptr );
        ptr++;
    }
	
    return 0;
}
