#include <stdio.h>

int main(){
    int array[5] = {1,2,7,4,5};
    int max = array[0];

    for(int i=0; i<5; i++){
        if(array[i]>max){
            max = array[i];
        }
    }

    printf("Max in array: %d\n", max);

    return 0;
}