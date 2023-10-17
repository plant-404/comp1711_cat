#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if(number % 5 == 0 && number % 4 == 0){
        printf("Number is divisble by 4 and 5.\n");
    }
    else{
        printf("Number is not divisble by 4 and 5\n");
    }
    
    return 0;
}
