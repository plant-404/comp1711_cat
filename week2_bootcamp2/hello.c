#include <stdio.h>

int main()
{
    char hello[6] = "Hello";
    for(int i=sizeof(hello)/sizeof(hello[0])-1;i>=0;i--){
        printf("%c", hello[i]);
    }
    printf("\n");
    return 0;
}