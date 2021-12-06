#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
    system("clear");

    printf("\n|------------------------------------|");
    printf("\n| Suchinton (A2345920063)            |");
    printf("\n|------------------------------------|\n\n");

    int len1=0,len2=0;

    printf("\nConcatenation of two strings");
    printf("\n============================");

    char str1[40];

    printf("\nEnter string 1 ~> ");
    scanf("%s",str1);

    char str2[20];

    printf("\nEnter string 2 ~> ");
    scanf("%s",str2);    

    len1=strlen(str1);
    len2=strlen(str2);

    int l1=len1,l2=0;
    len1=len1+len2;

    for(l1; l1<=len1;l1++)
        {
            str1[l1]=str2[l2];
            l2++;
        }

    printf("\n\nNew string ~> %s \n",str1);
}