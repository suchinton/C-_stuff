#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
struct Node {
    int data;
    struct Node* next;
};

void print(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main()
{
    system("clear");

    printf("\n| Suchinton (A2345920063)                 |");
    printf("\n|-----------------------------------------|");
    printf("\n| C Prog to implement Linked list         |");
    printf("\n|-----------------------------------------|\n");

    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 19; 
    head->next = second; 
    
    second->data = 22;
    second->next = third;
    third->data = 25;
    third->next = NULL;

    print(head);
    printf("\n");
}