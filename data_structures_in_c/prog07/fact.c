#include <unistd.h>
#include <stdio.h>

long int mult(int n);

int main()
{
    system("clear");
    
    int num;

    printf("\nFactorial");
    printf("\n=========");

    printf("\n\nEnter a positive integer: ");
    scanf("%d",&num);
    printf("Factorial of %d = %d \n", num, mult(num));
    return 0;
}

long int mult(int num) {
    if (num>=1)
        return num*mult(num-1);
    else
        return 1;
}