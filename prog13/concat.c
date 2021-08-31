#include <stdio.h>
#include <unistd.h>

int main()
{
    system ("clear");

    int len1,len2;

    printf("\nConcatenation of two strings");
    printf("\n============================");

    printf("\n\nEnter the length of sting 1 ~> ");
    scanf("%d",&len1);

    char str1[len1];

    printf("\nEnter string 1 ~> ");
    scanf("%s",str1);

    printf("\n\nEnter the length of sting 2 ~> ");
    scanf("%d",&len2);

    char str2[len2];

    printf("\nEnter string 2 ~> ");
    scanf("%s",str2);    

    int l1=len1,l2=0;
    len1=len1+len2;

    for(l1; l1<=len1;l1++)
        {
            str1[l1]=str2[l2];
            l2++;
        }

    printf("\n\nNew string ~> %s \n",str1);
}