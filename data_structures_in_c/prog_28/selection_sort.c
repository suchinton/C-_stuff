#include <stdio.h>
#include <colour.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int no;
    system ("clear");

    printf("\n| Suchinton (A2345920063)         |");
    printf("\n|---------------------------------|");
    printf("\n| WAP to implement Selection Sort |");
    printf("\n|---------------------------------|\n");

    printf("\nHow many elements do you wish to enter? : ");
    scanf("%d",&no);

    int arr[no];

    for(int i=0; i<no; i++)
    {
        printf("%d) ",i+1);
        scanf("%d", &arr[i]);
    }

    printf(GREEN"\nBefore Selection Sort : ");
    printArray(arr, no);

    selectionSort(arr, no);

    printf(YELLOW"After Selection Sort  : ");
    printArray(arr, no);
}