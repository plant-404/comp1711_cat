#include <stdio.h>

int main(){
    int array [5] = {5,5,2,3,1};
    
    int total = 0;
    for(int i=0;i<5;i++){
        total += array[i];
    }

    printf("Sum of each element in array is: %d\n", total);

    return 0;
}