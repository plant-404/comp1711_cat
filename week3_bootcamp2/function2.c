#include <stdio.h>

int sum (int a, float b)
{
    int answer;
    answer = a + b;
    return answer;
}

int main () 
{
    int y = 9;
    float z = (float)sum(5, y); // calling our new function

    printf ("The sum of 5 and %d is %.2f\n", y, z);
}