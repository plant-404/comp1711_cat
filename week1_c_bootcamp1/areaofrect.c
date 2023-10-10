#include <stdio.h>

int main()
{
    float width;
    float height;

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);

    printf("The area of the rectangle is: %f\n", width*height);
    return 0;
}