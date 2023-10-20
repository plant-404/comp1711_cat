#include <stdio.h>

int str_len(char* str){
    int counter = 0;
    while(*(str + counter) != '\0'){
        counter++;
    }
    return counter;
}

int main(){
    char input[64];

    printf("Enter a string: ");
    scanf("%s", input);

    printf("Length of string is: %d\n", str_len(input));

    return 0;
}