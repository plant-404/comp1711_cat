#include <stdio.h>

int main()
{
    float principal;
    float rate;
    float time;
    
    // Input principal, rate, and time and store respectively
    printf("What is the principal? (GBP) ");
    scanf("%f", &principal);

    printf("What is the rate of interest? (APR) ");
    scanf("%f", &rate);
    
    //Convert % interest to decimal ( / 100)
    rate /= 100;

    printf("Over what time will the interest incur? (days)");
    scanf("%f", &time);

    // Convert time to years (as we have APR)
    time /= 365;
    
    // Calculate and output the interest incurred (principal x rate x time)
    float interest = principal * rate * time;
    printf("The interest incurred would be £%.2f\n", interest);

    return 0;
}