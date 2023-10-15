#include <stdio.h>

void printarray(int* array, int length){
    for(int i=0; i<length; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

}

int main(){
    int array1[3] = {1,2,3};
    int array2[3] = {3,4,5};
    int array3[6];

    printarray(array1, 3);
    printarray(array2, 3);

    for(int i=0; i<3; i++){
        array3[i] = array1[i];
    }

    for(int i=3; i<6; i++){
        array3[i] = array2[i - 3];
    }

    printarray(array3, 6);

    return 0;
}