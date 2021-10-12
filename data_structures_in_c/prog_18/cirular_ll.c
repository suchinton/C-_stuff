#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node * next;
}*head;

void createList(int n);
void displayList();
void insert_beginning(int data);
void search_element(int data);
void updating_element(int data);
void insert_given_position(int data, int position);
void delete_beginning();
void delete_given_position();
void reverse_list();

int main()
{
    int n, data, choice=1;
    head = NULL;
    
    system ("clear");

    printf("\n| Suchinton (A2345920063)                                                            |");
    printf("\n|------------------------------------------------------------------------------------|");
    printf("\n| write a menu driven prog to implement various operations on a circular linked list |");
    printf("\n|------------------------------------------------------------------------------------|");

    while(choice != 0)
    {
        printf("\n\n\t\tCIRCULAR LINKED LIST BASIC OPERATIONS\n\n");
        printf("1. Create List\n");
        printf("2. Insert at beginning\n");
        printf("3. Insert at any position\n");
        printf("4. Delete at beginning\n");
        printf("5. Delete at any position\n");
        printf("6. Search Element\n");
        printf("7. Update Element\n");
        printf("8. Reverse List\n");
        printf("0. Exit\n");
        printf("\n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {   
            case 1:
                printf("Enter the total number of nodes in list: ");
                scanf("%d", &n);
                createList(n);
                displayList();
                break;
            case 2:
                if (head == NULL)
                {    
                    createList(1);
                    displayList();
                }
                else
                {
                    printf("Enter data to be inserted at beginning: ");
                    scanf("%d", &data);
                        insert_beginning(data);
                    displayList();
                }
                break;
            case 3:
                printf("Enter node position: ");
                scanf("%d", &n);
                printf("Enter data you want to insert at %d position: ", n);
                scanf("%d", &data);
                insert_given_position(data, n);
                displayList();
                break;
            case 4:
                if(head == NULL)
                    printf("\nThe list is empty\n");
                else
                {
                    delete_beginning();
                    displayList();
                }
                break;
            case 5:
                if(head == NULL)
                    printf("\nThe list is empty\n");
                else
                {
                    delete_given_position();
                    displayList();
                }
                break;
            case 6:
                printf("\nEnter the element to be searched : ");
                scanf("%d",&data);
                search_element(data);
                break;
            case 7:
                printf("\nEnter the element to be updated : ");
                scanf("%d",&data);
                updating_element(data);
                printf("\nThe Updated List is\n\n");
                displayList();
                break;
            case 8:
                reverse_list();
                break;
            case 0:
                break;
            default:
                printf("Error! Invalid choice.");
        }
        printf("\n");
    }
    return 0;
}

void createList(int n)
{
    int i, data;
    struct node *prevNode, *newNode;
    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        printf("Data of node 1 : ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        prevNode = head;

        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            printf("Data of node %d : ", i);
            scanf("%d", &data);
            newNode->data = data;
            newNode->next = NULL;

            prevNode->next = newNode;
            prevNode = newNode;
        }

        prevNode->next = head;
    }
}

void displayList()
{
    struct node *current;
    int n = 1;
    int count=0;
    
    if(head == NULL)
        printf("\nList is empty.\n");
    else
    {
        current = head;
        
        printf("\nThe SINGLY CIRCULAR LINKED LIST IS : \n");
        printf("... ~> ");
        do 
        {
            printf("%d ~> ",current->data);
            current = current->next;
            n++;
            count++;
        } while(current != head);
        
        printf("...\n");
        for(int i=0; i<=count+1 ;i++)
        printf("------");
    }
}

void insert_beginning(int data)
{
    struct node *newNode, *current;
    if(head == NULL)
        printf("List is empty.\n");
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = head;
        printf("\nThe element %d is inserted at the beginning",data);
        printf("\n");

        current = head;
        while(current->next != head)
            current = current->next;
        current->next = newNode;

        head = newNode; 
    }
}

void insert_given_position(int data, int position)
{
    struct node *newNode, *current;
    int i;
    if(head == NULL)
        printf("List is empty.\n");
    else if(position == 0)
        insert_beginning(data);
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        printf("\nThe element %d is inserted at index %d",data,position);
        printf("\n");

        current = head;
        for(i=2; i<=position; i++)
            current = current->next;

        newNode->next = current->next;
        current->next = newNode;
    }
}

void delete_beginning()
{
    struct node * temp,*s;

    if (head == head->next)
    {
        head = NULL;
        printf("\nThe List is empty\n");
    }
    else
    {
        temp = head;
        s = head;
        
        while (temp->next != head) 
            temp = temp -> next;
        
        printf("\nThe element %d is deleted at the beginning",s -> data);
        printf("\n");
        head = s->next; 
        temp->next = head;
        printf("\n");
        free(s);
    }
}

void delete_given_position()
{
    struct node * temp, *s;
    if (head == NULL)
    printf("\nThe List is empty");
    else
    {
        int count = 0, pos;
        printf("\nEnter the position to be deleted : ");
        scanf("%d", &pos);
        temp = head;
        while (count < pos)
        {
            s = temp;
            temp = temp -> next;
            count++;
        }
        printf("\nThe element %d at index %d is deleted",temp -> data,pos);
        printf("\n");
        s -> next = temp -> next; 
        printf("\n");
        free(temp);
    }
}

void search_element(int data)
{
    struct node * temp = head;
    int index = 0;
    while(temp)
    {
        if(temp -> data == data)
        {
            printf("\nElement found at index %d in the list",index);
            break; 
        }
        else
        {
            temp = temp -> next;
            index++;
        }
    }
}

void updating_element(int data)
{
    int new_data;
    printf("\nEnter the new data to replace with : ");
    scanf("%d",&new_data);
    struct node * temp = head;
    while(temp)
    {
        if(temp -> data == data)
        {
            temp -> data = new_data; 
            break;
        }
    else
        temp = temp -> next;
    }
}

void reverse_list()
{
    struct node *prev, *cur, *next, *last;
    printf("\nThe reversed List is\n\n");
    if (head == NULL)
    {
        printf("Cannot reverse empty list.\n");
        return;
    }

    last = head;
    prev = head;
    cur = (head)->next;
    head = (head)->next;

    while (head != last)
    {
        head = head -> next;
        cur->next = prev;
        prev = cur;
        cur = head;
    }
    cur->next = prev;
    head = prev;
    displayList();
}