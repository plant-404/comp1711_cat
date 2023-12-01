#include <stdio.h>
#include <string.h>
#include <sys/mman.h>

int lets_get_serious()
{
    printf("Function run.\n");
    return 0;
}

int main()
{
    printf("\n \n Even functions have address. \n \n");

    printf("The address of main function = %p \n \n", (void *)main);

    printf("The address of lets_get_serious function = %p \n \n", (void *) lets_get_serious);

    lets_get_serious();

    unsigned int bytepatch = 0x00;
    unsigned char* func = (unsigned char*)&lets_get_serious;
    mprotect(func, sizeof(unsigned char), PROT_READ || PROT_WRITE || PROT_EXEC);
    printf("%u\n", *func);
    *func = (unsigned char)0xC3;
    printf("%u\n", *func);

    lets_get_serious();
}