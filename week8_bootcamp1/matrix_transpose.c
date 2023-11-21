#include <stdio.h>
#include <stdlib.h>

#define height 2
#define width 3

void print_array(int** array, size_t dim1, size_t dim2){
    for(size_t i=0; i<dim1; i++){
        for(size_t j=0; j<dim2; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int array[height][width] = {{1,2,3},{4,5,6}};

    print_array(array, height, width);

    return 0;
}