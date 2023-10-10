#include <stdio.h>

int main()
{
    int input1;
    int input2;

    printf("Input the first integer to sum: ");
    scanf("%d", &input1);

    printf("Input the second integer to sum: ");
    scanf("%d", &input2);

    printf("Sum of integers: %d\n", input1+input2);

    return 0;
}