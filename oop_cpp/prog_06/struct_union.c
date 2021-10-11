#include <stdio.h>
#include <string.h>
#include <unistd.h>

void enterp1();
void enterp2();
void enterp3();
void showp1();
void showp2();

struct hospitals
{
    int Pno;
    char name[20];
    int room_no;
    float due_amount;
}p1;

union hospitalu
{
    int Pno;
    char name[20];
    int room_no;
    float due_amount;
}p2;

struct hospitalsu
{
    int Pno;
    char name[20];
    int room_no;
    float due_amount;
    union hospitalu_s
    {
        int Pno;
        char name[20];
        int room_no;
        float due_amount;
    }p_3;
}p3;
int main()
    {
        system("clear");

        printf("\n| Suchinton (A2345920063)                            |");
        printf("\n|----------------------------------------------------|");
        printf("\n| C Prog to implement Struct. & Union (Hospital Data)|");
        printf("\n|----------------------------------------------------|");

        printf("\n\tHospital Data");
        printf("\n\t+++++++++++++");

        printf("\n\nFor patient 1");
        enterp1();
        printf("\n---------------------------------------------------------"); 

        printf("\n\nFor patient 2");
        enterp2();
        printf("\n---------------------------------------------------------"); 

        printf("\n\nFor patient 3");
        enterp3();
        printf("\n---------------------------------------------------------"); 

        //system ("clear");
        
        printf("\n\tHospital Data");            //display deatials of objs
        printf("\n\t+++++++++++++");

        printf("\n\n\tFor patient 1 (Structure)");
        printf("\n-------------------------------------------------------------"); 
        showp1();

        printf("\n\n\tFor patient 2 (Union acessing data at onece)     ");
        printf("\n-------------------------------------------------------------"); 
        showp2();

        printf("\n\n\tFor patient 3 (Union acessing data one at a time)");
        printf("\n-------------------------------------------------------------"); 
        showp3();

    

    }

void enterp1()
{
        printf("\nEnter patient no.: ");        scanf("%i",&p1.Pno);
        printf("Enter patient name: ");       scanf("%s",&p1.name);
        printf("Enter Room no.: ");           scanf("%i",&p1.room_no);
        printf("Enter due amount: ");         scanf("%f",&p1.due_amount);
}

void showp1()
{
    printf("\nPatient no.: %i",p1.Pno);
    printf("\nPatient name: %s",p1.name);
    printf("\nRoom no.: %i",p1.room_no);
    printf("\nDue amount: %f",p1.due_amount);
    printf("\n\nSize of the P1 obj(struct): %i bytes",sizeof(p1));   
    printf("\n-------------------------------------------------------------"); 
}

void enterp2()
{
    printf("\nEnter patient no.: ");        scanf("%i",&p2.Pno);
    printf("Enter patient name: ");       scanf("%s",&p2.name);
    printf("Enter Room no.: ");           scanf("%d",&p2.room_no);
    printf("Enter due amount: ");         scanf("%f",&p2.due_amount);
}

void showp2()
{    //gets(p2.name);
    printf("\nPatient no.: %i",p2.Pno);
    printf("\nPatient name: %s",p2.name);
    printf("\nRoom no.: %i",p2.room_no);
    printf("\nDue amount: %f",p2.due_amount);
    printf("\n\nSize of the P2 obj(union): %i bytes",sizeof(p2));    
    printf("\n-------------------------------------------------------------"); 
}

void enterp3()
{
    printf("\nEnter patient no.: ");    scanf("%i",&p3.Pno);
    printf("Enter patient name: ");   scanf("%s",&p3.name);
    printf("Enter Room no.: ");       scanf("%i",&p3.room_no);
    printf("Enter due amount: ");     scanf("%f",&p3.due_amount);
}

void showp3()
{
    p3.p_3.Pno=p3.Pno;
    printf("\nPatient no.: %i",p3.p_3.Pno);
    strcpy(p3.p_3.name,p3.name);
    printf("\nPatient name: %s",p3.p_3.name);
    p3.p_3.room_no=p3.room_no;
    printf("\nRoom no.: %i",p3.p_3.room_no);
    p3.p_3.due_amount=p3.due_amount;
    printf("\nDue amount: %f",p3.p_3.due_amount);
    printf("\n\nSize of p_3 obj (union): %i bytes",sizeof(p3.p_3));
    printf("\nSize of p.3 obj (struct): %i bytes",sizeof(p3));
    printf("\n-------------------------------------------------------------"); 
}