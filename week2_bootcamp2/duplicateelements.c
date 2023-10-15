#include <stdio.h>
#include <time.h>

int main(){
    int random[6] = {31, 9, 8, 7, 31, 0};
    int duplicates[6];
    //srand(time(NULL));

    // Fill array with random integers
    // for(int i=0; i<6; i++){
    //     random[i] = rand() % 11;
    // }
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(random[i] == random[j] && i != j){
                printf("Duplicate of: %d\n", random[i]);
            }
        }
    } 

    return 0;
}