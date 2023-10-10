#include <stdio.h>
// Include math library for M_PI constant
#include <math.h>

int main()
{
    float radius;

    printf("Enter the radius of the circle: ");
    // Read user input as float to var radius
    scanf("%f", &radius);

    // Print radius of circle using a = pi * r^2
    printf("Radius of the circle: %f\n", M_PI * pow(radius,  2));

    return 0;
}