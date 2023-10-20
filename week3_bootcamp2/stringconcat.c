#include <stdio.h>

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

    char output[str1_len+str2_len+2];

    for(int i=0;i<str1_len;i++){
        output[i] = str1[i];
    }

    for(int i=str1_len;i<str2_len;i++){
        output[i] = str2[i];
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

    printf("Strings concatenated: %c\n", output[0]);
    return 0;
}