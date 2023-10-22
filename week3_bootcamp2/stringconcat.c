#include <stdio.h>
#include <stdlib.h> //malloc, free

int str_len(char* str){
    int counter = 0;
    while(*(str + counter) != '\0'){
        counter++;
    }
    return counter;
}

char* concatStrings(char* str1, char* str2){
    int str1_len = str_len(str1);
    int str2_len = str_len(str2);
    int concatLength = str1_len+str2_len+1;

    char* output = malloc(concatLength);

    for(int i=0;i<str1_len;i++){
        output[i] = str1[i];
        printf("Character %c at index %d\n", str1[i], i);
    }

    for(int i=str1_len;i<str1_len+str2_len;i++){
        output[i] = str2[i-str1_len];
        printf("Character %c at index %d\n", str2[i-str2_len], i);
    }
    
    return output;
}

int main(){
    char input1[64];
    char input2[64];
    
    printf("Enter a string: ");
    scanf("%s", input1);
    printf("%s\n", input1);
    printf("Enter a string: ");
    scanf("%s", input2);
    printf("%s\n", input2);

    char* output = concatStrings(input1,input2);


    printf("Strings concatenated: %s\n", output);
    free(output);

    return 0;
}