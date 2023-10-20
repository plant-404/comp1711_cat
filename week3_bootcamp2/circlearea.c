#include <stdio.h>
#include <math.h> // must use -lm when compiling

float circleArea(float radius){
    return M_PI * pow(radius, 2);
}

int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("The area of circle with radius %f is ~%.2f", radius, circleArea(radius));

    return 0;
}