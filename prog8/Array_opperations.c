#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main()
{
    system("clear");

    printf("\nTransversing Array");
    printf("\n-------------------------");

    int len;

    printf("\nEnter no. of elements to be entered ");
    scanf("%i", &len);

    int A[len], pos, new_el, ans = 'y';

    for (int i = 0; i < len; i++)
    {
        printf("\nElement %d is: ", i + 1);
        scanf("%i", &A[i]);
    }

    printf("\n\nArray Entered: \n");
    for (int i = 0; i < len; i++)
        printf("%d ", A[i]);

    printf("\n\n1) Transverse array");
    printf("\n2) Insert element");
    printf("\n3) Delete element");

    int c = 0;
    printf("\n\nOperation to be done: ");
    scanf("%i", &c);

    switch (c)
    {
    case 1:
    {
        printf("\nEnter the position of the element to be displayed: ");
        scanf("%i",pos);

        printf("%i",A[pos]);

        system("exit");
    }

    case 2:
    {
        len += 1; //for insertion of element

        printf("\nElement to be enetered: ");
        scanf("%i", &new_el);

        printf("\nposition of element: ");
        scanf("%i", &pos);

        for (int i = len - 1; i >= pos; i--)
            A[i] = A[i - 1];
        A[pos - 1] = new_el;

        break;
    }

    case 3:
    {
        printf("\nposition of element: "); //for deletion of element
        scanf("%i", &pos);

        pos -= 1;

        int temp = A[len];

        for (int i = pos; i < len; i++)
            A[i] = A[i + 1];

        len -= 1;
        break;
    }
    default:
    {
        system("exit");
    }
    }

    printf("\nEdited Array:\n"); //display edited array
    for (int i = 0; i < len; i++)
        printf("%i ", A[i]);
    printf("\n");

    return 0;
}

