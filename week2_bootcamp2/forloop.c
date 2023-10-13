#include <stdio.h>

int main(){
    int a;

    for(a = 1; a<=5; a+=2){
        printf("%d\n", a);
    }

    printf("After loop: a = %d\n", a);
    return 0;
}