#include <stdio.h>

int nCr(int n, int r)
{
    if (r == 0 || n == r)
        return 1;

    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main()
{
    int n = 6, r = 2;
    int output = nCr(n, r);
    printf("%d\n", output);

    return 0;
}