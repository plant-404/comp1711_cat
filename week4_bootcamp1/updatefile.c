#include <stdio.h>
#include <stdlib.h>
#include "lines.h"

int main(){
    FILE* file = fopen("numbers.dat", "a+");
    if(file == NULL){
        perror("");
        return 1;
    }

    float total = 0;
    int numlines = 0;
    char buf[64];
    while(fgets(buf, 64, file) != NULL){
        
        total += atof(buf);
        numlines += 1;
    }

    printf("%d\n", linesInFile(file));
    if(linesInFile(file) != numlines){
        fprintf(file, "%f", total/numlines);
    }
    else{
        fprintf(file, "\n%f", total/numlines);
    }

    fclose(file);
    return 0; 
}