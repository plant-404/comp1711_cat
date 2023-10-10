#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    printf("Max size of integer: %d\n", INT_MAX);
    printf("Min size of integer: %d\n", INT_MIN);

    printf("Max size of float: %f\n", FLT_MAX);
    printf("Min size of float: %f\n", FLT_MIN);

    printf("Max size of double: %f\n", DBL_MAX);
    printf("Min size of double: %f\n", DBL_MIN);

    printf("Max size of char: %d\n", CHAR_MAX);
    printf("Min size of char: %d\n", CHAR_MIN);

    return 0;
}