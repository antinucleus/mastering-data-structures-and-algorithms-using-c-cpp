#include <stdio.h>
#include <stdlib.h>

int main()
{
    char test[] = "finding";
    int store[26] = {0}, i;

    for (i = 0; test[i] != '\0'; i++)
    {
        store[test[i] - 97] += 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (store[i] > 1)
        {
            printf("%c\n", i + 97);
        }
    }

    return 0;
}