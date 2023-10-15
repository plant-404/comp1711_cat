#include <stdio.h>
void printarray(int* array){
    for(int i=0; i<=4; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

}

int main() {
    int array[5] = {1,2,3,4,5};
    int reversed[5];
    for(int i=4; i >= 0; i--){
        //printf("%d\n", (4-i));
        reversed[4-i] = array[i];
    }

    printarray(array);
    printarray(reversed);

    return 0;
}