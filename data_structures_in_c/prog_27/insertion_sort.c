#include <math.h>
#include <stdio.h>
#include <colour.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int no, n;
    system ("clear");

    printf("\n| Suchinton (A2345920063)         |");
    printf("\n|---------------------------------|");
    printf("\n| WAP to implement Insertion Sort |");
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
    
    insertionSort(arr, no);
    
    printf(YELLOW"After Insertion Sort  : ");
    printArray(arr, no);
}