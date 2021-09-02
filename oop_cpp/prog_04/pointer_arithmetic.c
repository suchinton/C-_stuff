#include <stdio.h>
#include <unistd.h>

int main () 
{
    int len;

    system ("clear");

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
