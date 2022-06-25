#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;

    return factorial(n - 1) * n;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{

    printf("%d\n", nCr(6, 2));
    return 0;
}
