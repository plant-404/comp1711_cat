#include <stdio.h>

/* Use array as arg by reference
 avoids using malloc and returning pointers
 out of scope*/

void reverseArray(int* array, int length){
    int arrayCopy[length];
    for(int i=0;i < length;i++){
        arrayCopy[i] = array[i];
    }

    for(int i=length-1;i>=0;i--){
        array[length-i-1] = arrayCopy[i];
    }
}

void printArray(int* array, int length){
    for(int i=0;i<length;i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(){
    int arrayInts[7] = {1,2,3,4,5,6,7};
    printf("Before reversing: ");
    printArray(arrayInts,7);

    reverseArray(arrayInts,7);

    printf("After reversing: ");
    printArray(arrayInts,7);

    return 0;
}