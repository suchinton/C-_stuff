#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
    system("clear");

    int n,f,t;
    char str1[20],str2[20]; 

    printf("\n\tString Operations");
    printf("\n\t+++++++++++++++++");

    printf("\n1) String length");
    printf("\n2) String Copy");
    printf("\n3) String Concantenate");
    printf("\n4) String Compare");
    printf("\n5) Substring");
    printf("\n6) Reverse String");
    printf("\n7) Palindrome");

    printf("\n\nEnter you choice: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
            {
                printf("\nEnter your string: ");
                scanf("%s",str1);
                printf("\n Length of entered string is: %i \n",strlen(str1));
                break;
            }

    case 2:
            {
                printf("\nEnter your first string: ");
                scanf("%s",str1);
                printf("\nEnter your second string: ");
                scanf("%s",str2);
                strcpy(str1,str2);
                printf("\nnew string is: %s \n",str1);
                break;
            }
    
    case 3:
            {
                printf("\nEnter your first string: ");
                scanf("%s",str1);
                printf("\nEnter your second string: ");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("\nnew string is: %s \n",str1);
                break;  
            }

    case 4:
            {
                printf("\nEnter your first string: ");
                scanf("%s",str1);
                printf("\nEnter your second string: ");
                scanf("%s",str2);
                if(strcmp(str1,str2)==0)
                    printf("\nEntered strings are identical :) \n");
                else
                    printf("\nEntered strings are different :( \n");
                break;
            }

    case 5:
            {
                printf("\nEnter your string: ");
                scanf("%s",str1);
                printf("\nsubstring from: ");
                scanf("%i",f);
                printf(" to: ");
                scanf("%i",t);
                str2=str1.substr(f,t);
                printf("%s",str2);
                break;
            }   
    case 6:
            {

            }
    case 7:
            {

            }
    default:
                break;
    }
}