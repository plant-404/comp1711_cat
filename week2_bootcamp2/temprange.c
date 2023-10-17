#include <stdio.h>

int main() {
    int temp;
    printf("Enter a temperature: ");
    scanf("%d", &temp);
    
    if(temp >= -10 && temp <= 40){
       printf("Temperature in range.\n"); 
    }
    else{
        printf("Temperature not in range.\n");
    }
    
    return 0;
}
