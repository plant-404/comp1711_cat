#include <stdio.h>

int main()
{
    int a = 9, b = 1, c;

    printf("Value of a: %d, value of b: %d\n", a, b);

    // Move value of a -> c, b -> a, and then c -> b, swapping vars
    c = a;
    a = b;
    b = c;

    printf("Value of a: %d, value of b: %d\n", a, b);
    
    return 0;
}