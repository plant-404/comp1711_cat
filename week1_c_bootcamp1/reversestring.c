#include <stdio.h>

int main()
{
    char[15] str_to_reverse;
    printf("Enter a string to reverse: ");
    scanf("%s", str_to_reverse);

    char[15] str_reversed;
    for (int i=len(str_to_reverse); i > 0; i--)
    {
        str_reversed[len(str_to_reverse) - i] = str_to_reverse[i];
    }
    printf(str_reversed);
    return 0;
}