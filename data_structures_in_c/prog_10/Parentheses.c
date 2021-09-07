#include <stdio.h>
#include <unistd.h>

char stack[100],x[100];
int choice,top,i;

void push(void);
void pop(void);
void display(void);
void check(void);

int main()
{
    system("clear");

    top=-1;
    printf("\n Size of STACK is 100 ");

    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t ============================");
    printf("\n\t 1)PUSH\n\t 2)POP\n\t 3)DISPLAY\n\t \n\t4)Check \n\t5)EXIT");

    do
    {
        printf("\n Enter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                check();
                break;
            }
            case 5:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=5);
    return 0;
}
void push()
{
    if(top>=100-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter expression to be pushed: ");
        scanf("%s",&x);
        top++;
        stack[top]=x[top];
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %c",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=0; i>=top; i++)
            printf("%c ",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}

void check(void)
{
    int error,j=-1;
    for(i=top;i<=0;i--)
        { 
            if((stack[i]=="(" && stack[j]==")") || (stack[i]=="{" && stack[j]=="}"))
                {
                    error=0;
                    j++;
                }
            else error=1;
        }
    if(error==0)
        printf("\nAll good");
    else
        printf("\nerror!!");
    
}