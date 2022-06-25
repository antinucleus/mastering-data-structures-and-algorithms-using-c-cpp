#include <stdio.h>

void functionA(int);
void functionB(int);

void functionA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        functionB(n - 1);
    }
}

void functionB(int n)
{
    if (n > 1)
    {
        printf("%d ", n);
        functionA(n / 2);
    }
}

int main()
{
    functionB(32);

    return 0;
}