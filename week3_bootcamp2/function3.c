#include <stdio.h>
float sum (float a, float b);

int main () 
{
    float y = 2;
    float z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %.1f is %.1f\n", y, z);
    return 0;
}

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}