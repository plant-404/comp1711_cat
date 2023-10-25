#include "lines.h"

int linesInFile(FILE* file){
    rewind(file);

    char charToRead = '1';
    int numNewlines = 0;
    while(1){
        charToRead = getc(file);
        //printf("%c", charToRead);
        if(charToRead == '\n'){
            numNewlines += 1;
            //printf("New line\n");
        }
        else if(charToRead == EOF){
            break;
        }
    }
    numNewlines += 1;
    rewind(file);
    return numNewlines;
}