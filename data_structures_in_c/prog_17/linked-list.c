#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct node 
{
    int info;
    struct node* link;
};
struct node* start = NULL;

void traverse()
{
    struct node* temp;

    int count=0;

    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        printf("\nLinked List :\n");
        while (temp != NULL) 
        {
            printf("%d ~> ", temp->info);
            temp = temp->link;
            count++;
        }
        printf("Null\n");
        for(int i=0; i<=count ;i++)
            printf("------");
    }
}

void insertAtFront()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp->info = data;
    temp->link = start;
    start = temp;
}

void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));

    printf("\nEnter data : ");
    scanf("%d", &data);

    temp->link = 0;
    temp->info = data;
    head = start;
    while (head->link != NULL) 
    {
        head = head->link;
    }
    head->link = temp;
}

void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
 
    printf("\nEnter position : ");
    scanf("%d", &pos);
    if(pos==1)
        insertAtFront();
    else
    {
        printf("\nEnter data : ");
        scanf("%d", &data);

        temp = start;
        newnode->info = data;
        newnode->link = 0;
        while (i < pos - 1) 
        {
            temp = temp->link;
            i++;
        }
        newnode->link = temp->link;
        temp->link = newnode;
    }
}   
  
void deleteFirst()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else 
    {
        temp = start;
        start = start->link;
        free(temp);
    }
}

void deleteEnd()
{
    struct node *temp, *prevnode;
    if (start == NULL)
        printf("\nList is Empty\n");
    else {
        temp = start;
        while (temp->link != 0) 
        {
            prevnode = temp;
            temp = temp->link;
        }
        free(temp);
        prevnode->link = 0;
    }
}

void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;

    if (start == NULL)
        printf("\nList is empty\n");
    else {
        printf("\nEnter index : ");
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = start;
        while (i < pos - 1) 
        {
            temp = temp->link;
            i++;
        }
        position = temp->link;
        temp->link = position->link;
        free(position);
    }
}

int main()
{
    int choice;
    
    system ("clear");

    printf("\n| Suchinton (A2345920063)                                                                   |");
    printf("\n|-------------------------------------------------------------------------------------------|");
    printf("\n| C prog to perform insetion (S/E/P), deletion (S/E/P) and disply operations on linked list |");
    printf("\n|-------------------------------------------------------------------------------------------|");
    
    while (1) 
    {
  
        printf("\n\n\t1)  To see list\n");
        printf("\t2)  For insertion at starting\n");
        printf("\t3)  For insertion at end\n");
        printf("\t4)  For insertion at any position\n");
        printf("\t5)  For deletion of first element\n");
        printf("\t6)  For deletion of last element\n");
        printf("\t7)  For deletion of element at any position\n");
        printf("\t8)  To exit\n");
        printf("\nEnter Choice : ");
        scanf("%d", &choice);                                           
  
        switch (choice) 
        {
            case 1:
                traverse();
                break;
            case 2:
                insertAtFront();
                break;
            case 3:
                insertAtEnd();
                break;
            case 4:
                insertAtPosition();
                break;
            case 5:
                deleteFirst();
                break;
            case 6:
                deleteEnd();
                break;
            case 7:
                deletePosition();
                break;
            case 8:
                exit(1);
                break;
            default:
                printf("Incorrect Choice\n");
        }
    }
}