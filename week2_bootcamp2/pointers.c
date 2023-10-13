#include <stdio.h>

int main(){
    int var = 0x42;
    int *ptr = &var;

    printf("%0x\n", var);
    printf("%01x\n", *ptr);
    printf("%01x\n", ptr);
    printf("%01x\n", &ptr);

    return 0;
}