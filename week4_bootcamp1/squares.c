#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* file = fopen("squares.dat", "w");
    if(file == NULL){
        perror("");
        return 1;
    }

    int limit;
    printf("Enter n: ");
    scanf("%d", &limit);

    for(int i = 1; i <= limit; i++){
        fprintf(file, "%d\n", i*i);
    }

    fclose(file);
    return 0;
}