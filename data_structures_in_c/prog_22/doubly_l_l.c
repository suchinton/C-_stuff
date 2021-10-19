#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    struct node *prev;
    int n;
    struct node *next;
}*h,*temp,*temp1,*temp2,*temp4;
 
void insert_beg();
void insert_end();
void insert_pos();
void traversebeg();
void traverseend(int);
void sort();
void search();
void delete();
 
int count = 0;
 
void main()
{
    int ch;
 
    h = NULL;
    temp = temp1 = NULL;
            
    system ("clear");

    printf("\n| Suchinton (A2345920063)             |");
    printf("\n|-------------------------------------|");
    printf("\n| WAP to implement a doubly linked list |");
    printf("\n|-------------------------------------|\n");
 
    AGAIN:printf("\n\n1) Insert at beginning");
    printf("\n2) Insert at end");
    printf("\n3) Insert at position i");
    printf("\n4) Delete at i");
    printf("\n5) Display from beginning");
    printf("\n6) Display from end");
    printf("\n7) Search for element");
    printf("\n8) Exit\n");
 
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert_beg();
            traversebeg();
            goto AGAIN;
        case 2:
            insert_end();
            traversebeg();
            goto AGAIN;
        case 3:
            insert_pos();traversebeg();
            traversebeg();
            goto AGAIN;
        case 4:
            delete();
            traversebeg();
            goto AGAIN;
        case 5:
            traversebeg();
            goto AGAIN;
        case 6:
            temp2 = h;
            if (temp2 == NULL)
                printf("\n Error : List empty to display ");
            else
            {
                printf("\n Reverse order of linked list is : \n");
                traverseend(temp2->n);
                printf("\n---------------------------------------------------");
            }
            goto AGAIN;
        case 7:
            search();
            goto AGAIN;
        case 8:
            exit(0);
        default:
            printf("\n Wrong choice menu");
            goto AGAIN;
        }
    }
}

void create()
{
    int data;
 
    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\n Enter value to node : ");
    scanf("%d", &data);
    temp->n = data;
    count++;
}

void insert_beg()
{
    if (h == NULL)
    {
        create();
        h = temp;
        temp1 = h;
    }
    else
    {
        create();
        temp->next = h;
        h->prev = temp;
        h = temp;
    }
}

void insert_end()
{
    if (h == NULL)
    {
        create();
        h = temp;
        temp1 = h;
    }
    else
    {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}

void insert_pos()
{
    int pos, i = 2;
 
    printf("\n Enter positions to be inserted : ");
    scanf("%d", &pos);
    temp2 = h;

    if(pos==1 && count == 0)
    {
        create();
        h = temp;
        temp1 = h;
        return;
    }    

    if ((pos < 1) || (pos >= count + 1))
    {
        printf("\n Position out of range to insert");
        return;
    }
    if ((h == NULL) && (pos != 1))
    {
        printf("\n Empty list cannot insert other than 1st position");
        return;
    }
    if ((h == NULL) && (pos == 1))
    {
        create();
        h = temp;
        temp1 = h;
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        create();
        temp->prev = temp2;
        temp->next = temp2->next;
        temp2->next->prev = temp;
        temp2->next = temp;
    }
}

void delete()
{
    int i = 1, pos;
 
    printf("\n Enter position to be deleted : ");
    scanf("%d", &pos);
    temp2 = h;
 
    if ((pos < 1) || (pos >= count + 1))
    {
        printf("\n Error : Position out of range to delete");
        return;
    }
    if (h == NULL)
    {
        printf("\n Error : Empty list no elements to delete");
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        if (i == 1)
        {
            if (temp2->next == NULL)
            {
                printf("Node deleted from list");
                free(temp2);
                temp2 = h = NULL;
                return;
            }
        }
        if (temp2->next == NULL)
        {
            temp2->prev->next = NULL;
            free(temp2);
            printf("Node deleted from list");
            return;
        }
        temp2->next->prev = temp2->prev;
        if (i != 1)
            temp2->prev->next = temp2->next;    
        if (i == 1)
            h = temp2->next;
        printf("\n Node deleted");
        free(temp2);
    }
    count--;
}

void traversebeg()
{
    temp2 = h;
 
    if (temp2 == NULL)
    {
        printf("List empty to display \n");
        return;
    }
    printf("\n Linked list elements from begining : \n");
 
    while (temp2->next != NULL)
    {
        printf("%d <=> ", temp2->n);
        temp2 = temp2->next;
    }
    printf(" %d \n", temp2->n);
    printf("----------------------------------------------------");
}

void traverseend(int i)
{
    if (temp2 != NULL)
    {
        i = temp2->n;
        temp2 = temp2->next;
        traverseend(i);
        printf("%d <=> ", i);
    }
}

void search()
{
    int data, count = 0;
    temp2 = h;
 
    if (temp2 == NULL)
    {
        printf("\n Error : List empty to search for data");
        return;
    }
    printf("\n Enter value to search : ");
    scanf("%d", &data);
    while (temp2 != NULL)
    {
        if (temp2->n == data)
        {
            printf("\n Data found in %d position",count + 1);
            return;
        }
        else
             temp2 = temp2->next;
            count++;
    }
    printf("\n Error : %d not found in list", data);
}
