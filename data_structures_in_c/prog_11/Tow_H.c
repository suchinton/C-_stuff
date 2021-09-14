#include <stdio.h>
#include <unistd.h>

int step_no=1;

void towerOfHanoi(int n, char from_tower,
                    char to_tower, char aux_tower)
{
    if (n == 1)
    {
        printf("\nStep %i) Move disk 1 from tower %c to tower %c", step_no, from_tower, to_tower);
        step_no++;
        return;
    }
    towerOfHanoi(n - 1, from_tower, aux_tower, to_tower);
    printf("\nStep %i) Move disk %i from tower %c to tower %c", step_no, n, from_tower, to_tower);
    step_no++;
    towerOfHanoi(n - 1, aux_tower, to_tower, from_tower);
}
 
int main()
{
    int n; // Number of disks

    system("clear");

    printf("\n| Suchinton (A2345920063)            |");
    printf("\n|------------------------------------|");
    printf("\n| C Prog to implement tower of hanoi |");
    printf("\n|------------------------------------|");

    printf("\n\nPlease enter no. of disks to transfer from tower A to C: ");
    scanf("%i", &n);
    towerOfHanoi(n, 'A', 'C', 'B'); 
    printf("\n");
}