#include <stdio.h>

int main() {
    int a[10];
    for(int i=0; i<10; i++){
        a[i] = i * 10 + i;
    }

    printf("First elem: %d Second elem: %d\n", a[0], a[1]);
    printf("By pointers\nFirst elem: %d Second elem: %d\n",
     *a, *(a+1));

    return 0;
}