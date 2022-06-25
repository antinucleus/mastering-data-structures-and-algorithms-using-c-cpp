#include <stdio.h>

void tail(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        tail(n - 1);
    }
}

int main()
{
    int input = 3;

    tail(input);
    return 0;
}