#include <stdio.h>

int main(){
    int totalodd = 0;
    int counter = 0;
    while(totalodd<10){
        counter += 1;
        if(counter % 2 == 1){
            printf("%d\n", counter);
            totalodd += 1;
        }
    }

    return 0;
}