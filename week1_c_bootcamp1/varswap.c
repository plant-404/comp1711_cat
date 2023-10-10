#include <stdio.h>

int main()
{
    int a = 9;
    int b = 1;
    int c;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    // Move value of a -> c, b -> a, and then c -> b
    c = a;
    a = b;
    b = c;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    return 0;
}