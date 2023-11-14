#include <stdio.h>

typedef struct{
    double x;
    double y;
} point;

int main(){
    point Points;
    printf("Enter an X co-ordinate: ");
    scanf("%lf", &Points.x);
    printf("Enter a Y co-ordinate: ");
    scanf("%lf", &Points.y);

    printf("(%.2lf,%.2lf)\n", Points.x, Points.y);

    return 0;
}