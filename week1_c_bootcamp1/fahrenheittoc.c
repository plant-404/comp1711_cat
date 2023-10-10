#include <stdio.h>

int main()
{
    // Formula: C = 5/9(F-32)

    //Take user's input and store in fahrenheit var
    double fahrenheit;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);
    
    // Calculate and print temp in fahrenheit using formula
    printf("Temperature in celsius: %lf\n", (fahrenheit - 32) * 5/9);

    return 0;
}