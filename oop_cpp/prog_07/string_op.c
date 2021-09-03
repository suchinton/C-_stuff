#include <stdio.h>
#include <string.h>
#include <unistd.h>

const char *substring(char str1[20],int f,int t);
const char *rev(char str1[20]);
const char *pal(char str1[20]);
int count(char str1[20]);

int main()
{
    system("clear");

    int n,f,t;
    char str1[20],str2[20];

    printf("\n| Suchinton (A2345920063)              |");
    printf("\n|--------------------------------------|");
    printf("\n| C Prog to impliment String Operations|");
    printf("\n|--------------------------------------|");
    
    printf("\n\nEnter your string: ");          //Enter String
    scanf("%s",&str1); 

    printf("\n\tString Operations");            //Menu
    printf("\n\t+++++++++++++++++");

    printf("\n1) String length");
    printf("\n2) String Copy");
    printf("\n3) String Concantenate");
    printf("\n4) String Compare");
    printf("\n5) Substring");
    printf("\n6) Reverse String");
    printf("\n7) Palindrome");
    printf("\n8) Exit");
    
    printf("\n\nEnter you choice: ");
    scanf("%d",&n);
    
    switch (n)
    {
    case 1: //output len of string
            {
                printf("\n Length of entered string is: %i \n",strlen(str1));
                break;
            }

    case 2: //output string copy
            {
                printf("\nEnter your second string: ");
                scanf("%s",str2);
                strcpy(str1,str2);
                printf("\nnew string is: %s \n",str1);
                break;
            }
    
    case 3: //concatenates two strings
            {
                printf("\nEnter your second string: ");
                scanf("%s",str2);
                strcat(str1,str2);
                printf("\nnew string is: %s \n",str1);
                break;  
            }

    case 4: //compare two strings
            {
                printf("\nEnter your second string: ");
                scanf("%s",str2);
                if(strcmp(str1,str2)==0)
                    printf("\nEntered strings are identical :) \n");
                else
                    printf("\nEntered strings are different :( \n");
                break;
            }

    case 5: //output substring 
            {
                printf("\nsubstring from: ");
                scanf("%i",&f);
                printf("\n to: ");
                scanf("%i",&t);
                substring(str1,f-1,t);
                break;
            }   
    case 6: //output reverse of string 
            {
                printf("\nreverse of enterd string is: ");
                printf("%s",rev(str1));
                break;
            }
    case 7: //check for palindrome
            {
                pal(str1);
                break;
            }
    case 8:
            {
                system("exit");
            }
    
                
    }
}

const char *substring(char str1[20],int f,int t)
{
    int j=0;
    char *str3[20];
    for(int i=f;i<t;i++)
        {
            str3[j]=str1[i];
            j++;
        }  
    str3[j+1]='\0';
    for(int i=0;i<t;i++)
        printf("%c",str3[i]);
    printf("\n");
}

const char *rev(char str1[20])
    {
        char str3[20];
        int end=count(str1)-1;
        for(int start=0;start<=count(str1);start++)
            {
                str3[start]=str1[end];
                end--;
            }
        
        for(int i=0;i<strlen(str3);i++)
            printf("%c",str3[i]);
        printf("\n");
    }

const char *pal(char str1[20])
    {
        char str3[20];
        int end=count(str1)-1,p=0;
        for(int start=0;start<=count(str1);start++)
            {
                str3[start]=str1[end];
                end--;
            }
        for(int i=0;i<=count(str1);i++)
            {
                if(str3[i]!=str1[i])
                    {
                        int p=1;
                        break;
                    }
            }
        if(strcmp(str1,str3)==0)
            {
                printf("entered string ( %s ) is a palindrome :)",str3);
                printf("\n");
            }
        else
            {
                printf("entered string ( %s ) is not a palindrome :(",str1);
                printf("\n");
            }
    }

int count(char str1[20])
    {
        int count=0,i;
        for(i=0; str1[i]!='\0'; ++i);
        count=i;
        return count;
    }