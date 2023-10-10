#include <stdio.h>

int main()
{
    // Assume speed of light as: 299 792 458 m/s
    // Store as double otherwise mult will result in integer value -> overflow
    double lightspeed = 299792458;

    // Store number of days in variable days
    int days;
    printf("For how many days would the light travel? ");
    scanf("%d", &days);

    // Calculate numbers of seconds from days and store
    int seconds;
    seconds = days * 24 * 60 * 60;

    // Large values output, but not > 16 bit accuracy needed so use double
    double distance = lightspeed * seconds;
    printf("Light would travel %lf metres in %d day(s)\n", distance, days);

    return 0;
}