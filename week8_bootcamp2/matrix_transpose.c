#include <stdio.h>
#include <stdlib.h>

#define height 2
#define width 3

void print_array(int array[][width], size_t dim1, size_t dim2){
    for(size_t i=0; i<dim1; i++){
        for(size_t j=0; j<dim2; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int array[height][width] = {{1,2,3},{4,5,6}};
    int flatarray[height*width];

    printf("Before transposition: \n");
    print_array(array, height, width);

    for(int i=0;i<height;i++){
        for(int j=0;j<width;j++){
            flatarray[i * width + j] = array[i][j];
        }
    }

    printf("After transposition: \n");
    for(int i = 0; i < height*width ; i++){
        printf("%d ", flatarray[i]);
    }
    printf("\n");

    return 0;
}