#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* file = fopen("squares.dat", "r");
    if(file == NULL){
        perror("");
        return 1;
    }

    char buf[128];
    float total = 0;
    int lines = 0;
    while(fgets(buf, 128, file) != NULL){
        total += atoi(buf);
        lines += 1;
    }

    printf("Average of numbers: %f\n", total/lines);
    fclose(file);
    return 0;
}