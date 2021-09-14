#include <stdio.h>
#include <unistd.h>

#define MAX 50
 
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;

int main()
{
    int choice;

    system ("clear");

    printf("\n| Suchinton (A2345920063)                 |");
    printf("\n|-----------------------------------------|");
    printf("\n| C Prog to implement Queues using Arrays |");
    printf("\n|-----------------------------------------|\n");

    while (1)
    {
        printf("\n1.Insert element into queue");
        printf("\n2.Delete element");
        printf("\n3.Display all elements in queue");
        printf("\n4.Exit \n");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                    insert();
                    break;
            case 2:
                    delete();
                    break;
            case 3:
                    system("clear");
                    display();
                    break;
            case 4:
                    exit(1);
            default:
                    printf("Wrong choice \n");
        }
    }
} 
 
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} 