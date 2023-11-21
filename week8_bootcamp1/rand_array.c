#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** mult_2_arrays(int array1[][4], int array2[][4]){
    static int output[3][4];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            output[i][j] = array1[i][j] * array2[i][j];
        }
    }

    return output;
}

void print_array(int array[][4]){
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int array[3][4];
    int array2[3][4];
    int i, j;

    // Seed the random number generator
    srand(time(NULL));

    // Assign random values to each element of the array
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            array[i][j] = rand() % 11; // rand() % 11 gives a range 0 to 10
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            array2[i][j] = rand() % 11; // rand() % 11 gives a range 0 to 10
        }
    }

    // Print the array to verify
    print_array(array);
    print_array(array2);
    print_array(mult_2_arrays(array, array2));

    return 0;
}