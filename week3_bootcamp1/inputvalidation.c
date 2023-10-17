#include <stdio.h>

int main() {
    int number;
    bool validating = true;
    
    while(validating){
        printf("Choose a number (or termination value): ");
        scanf("%d", &number);
    
        if(number >= 0 && number <= 100){
            printf("Number is valid.\n");
        }
        else if(number == -1){
            printf("Termination value entered. Exiting...\n");
            validating = false;
        }
        else{
            printf("Number not valid.\n");
        }
    }
    
    return 0;
}
