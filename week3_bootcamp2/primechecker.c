#include <stdio.h>

int isPrime(int toCheck){
    for(int i = toCheck - 1; i > 1; i--){
        // printf("%d mod %d = %d\n", toCheck, i, toCheck % i);
        if(toCheck % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int input;
    printf("Enter an integer: ");
    scanf("%d", &input);

    int primeness = isPrime(input);
    if(primeness){
        printf("The number %d is prime\n", input);
    }
    else{
        printf("The number %d isn't prime\n", input);
    }

    return 0;
}