#include<stdio.h>
#include <unistd.h>


int main()
    {
        system("clear");


        printf("\n| Suchinton (A2345920063)                             |");
        printf("\n|-----------------------------------------------------|");
        printf("\n| C Prog to Prog to find the product of two matrices  |");
        printf("\n|-----------------------------------------------------|");
        
        printf("\nSorting Elements (Bubble)");
        printf("\n-------------------------");

        int len;
        printf("\nEnter no. of elements you wish to enter: ");
        scanf("%d",&len);

        int A[len];

        for(int i=0;i<len;i++)
            {
                printf("\n\nElement %d is: ",i+1);
                scanf("%d",&A[i]);
            }

        system("clear");
        printf("\n\nBefore Sorting: \n");
        for(int i=0;i<len;i++)
            printf("%d ",A[i]);

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

        printf("\n\nAfter sorting\n");
        for(int i=0;i<len;i++)
            printf("%d ",A[i]);
        printf("\n");
    }

