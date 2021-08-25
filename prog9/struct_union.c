#include <stdio.h>
#include <string.h>
#include <unistd.h>

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

int main()
    {
        system("clear");

        printf("\n\tHospital Data");
        printf("\n\t+++++++++++++");

        printf("\n\nFor patient 1");

        printf("\nEnter patient no.: ");
        scanf("%i",&p1.Pno);
        printf("\nEnter patient name: ");
        scanf("%s",&p1.name);
        printf("\nEnter Room no.: ");
        scanf("%i",&p1.room_no);
        printf("\nEnter due amount: ");
        scanf("%f",&p1.due_amount);

        printf("\n\nFor patient 2");

        printf("\nEnter patient no.: ");
        scanf("%i",&p2.Pno);
        printf("\nEnter patient name: ");
        scanf("%s",&p2.name);
        //gets(p2.name);
        printf("\nEnter Room no.: ");
        scanf("%d",&p2.room_no);
        printf("\nEnter due amount: ");
        scanf("%f",&p2.due_amount);

        //system("clear");

        printf("\n\tHospital Data");            //display deatials of objs
        printf("\n\t+++++++++++++");

        printf("\n\n\tFor patient 1");

        printf("\nPatient no.: %i",p1.Pno);
        printf("\nPatient name: ");
        puts(p1.name);
        printf("\nRoom no.: %i",p1.room_no);
        printf("\nDue amount: %f",p1.due_amount);
        printf("\n\nSize of the P1 obj(struct): %i bytes",sizeof(p1));

        printf("\n\n\tFor patient 2");

        printf("\nPatient no.: %i",p2.Pno);
        printf("\nPatient name: ");
        printf("%s",p2.name);
        //puts(p2.name);
        printf("\nRoom no.: %i",p2.room_no);
        printf("\nDue amount: %f",p2.due_amount);
        printf("\n\nSize of the P2 obj(struct): %i bytes",sizeof(p2));

    }
