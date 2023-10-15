#include <stdio.h>

void printarray(int* array){
    for(int i=0; i<=4; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

}

int main(){
    int array[5] = {1,2,3,4,5};
    int rotated[5];

    for(int i=0;i<5;i++){
        if(i == 4){
            rotated[0] = array[i];
        }
        else{
            rotated[i+1] = array[i];           
        }
    } 

    printarray(array);
    printarray(rotated);

    return 0;
}