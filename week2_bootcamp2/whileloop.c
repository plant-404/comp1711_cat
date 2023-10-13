#include <stdio.h>

int main(){
    char a = 1;
    while (a>0){
        printf("%d\n", a);
        a+=1;
    }

    printf("After loop: %d\n", a);
    return 0;
}