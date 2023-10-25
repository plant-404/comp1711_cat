#include "utils.h"

FILE *open_file(char *filename, char *mode)
{
    FILE *file = fopen(filename, mode);

    if (file == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    return file;
}