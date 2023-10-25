#include "lines.h"

int linesInFile(FILE* file){
    rewind(file);

    char charToRead = '1';
    int numNewlines = 0;
    while(1){
        charToRead = fgetc(file);
        printf("%c", charToRead);
        if(charToRead == '\n'){
            numNewlines += 1;
        }
        else if(charToRead == EOF){
            break;
        }
    }
    
    rewind(file);
    return numNewlines;
}