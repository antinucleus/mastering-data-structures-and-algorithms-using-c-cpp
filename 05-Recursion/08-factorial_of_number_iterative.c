#include <stdio.h>

int factorial(unsigned int n)
{
    int r = 1;
    while (n)
    {
        r *= n;
        n--;
    }
    return r;
}

int main()
{
    int input = 4;
    int output = factorial(input);
    printf("%d\n", output);

    return 0;
}