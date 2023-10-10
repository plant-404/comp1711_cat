#include <stdio.h>

int main()
{
    // Store user's inputted number in variable input
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    // If input divisible by 2, output even, else odd
    if (input % 2 == 0)
    {
        printf("%d is even!\n", input);
    }
    else
    {
        printf("%d is odd!\n", input);
    }

    return 0;
}