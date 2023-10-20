#include <stdio.h>
#include <math.h> // include -lm

float sphereVolume(float radius){
    return  4 * M_PI * pow(radius, 3) / 3;
}

int main(){
    float radius;
    printf("Enter radius of sphere: ");
    scanf("%f", &radius);

    printf("Volume of sphere with radius %f is ~%.2f\n", radius, sphereVolume(radius));
    return 0;
}