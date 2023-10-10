#include <stdio.h>

int factorial(int num)
{
    // Use recursive function, base case 1, to multiply each step of number - 1
    if(num == 1)
    {
        return 1;
    }
    else
    {
        return factorial(num-1) * num;
    }
}

int main()
{
    // Store user's input in variable input
    int input;
    printf("Enter a number to calculate the factorial of: ");
    scanf("%d", &input);

    printf("%d\n", factorial(input));

    return 0;
}