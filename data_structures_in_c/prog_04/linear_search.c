#include <stdio.h>
#include <unistd.h>

 int main()
   {
        system("clear");


        printf("\n| Suchinton (A2345920063)            |");
        printf("\n|------------------------------------|");
        printf("\n| C Prog to implement Linear Search  |");
        printf("\n|------------------------------------|\n");
      printf("\n\tLinear Search");
      printf("\n\t-------------");

      int len,search;
      printf("\nEnter no. of elements you wish to enter: ");
      scanf("%d",&len);

      int A[len];

      for(int i=0;i<len;i++)
         {
            printf("\n\nElement %d is: ",i+1);
            scanf("%d",&A[i]);
         }
      
      //system("clear");

      printf("\n\nArray enterd by you: \n");
      for(int i=0;i<len;i++)
      printf("%d ",A[i]);

      printf("\nenter the element to search: ");
      scanf("%d",&search);

      for(int i=0;i<len;i++)
         {
            if(A[i]==search)
               {
                  printf("\nElement %d is stored in position: %d\n",search,i+1);
                  continue;
               }
         }
   }
