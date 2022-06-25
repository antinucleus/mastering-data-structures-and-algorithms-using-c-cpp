#include <stdio.h>
#include <string.h>

int F[10];

int fibonacci(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }

    if (F[n - 2] == -1)
        F[n - 2] = fibonacci(n - 2);

    if (F[n - 1] == -1)
        F[n - 1] = fibonacci(n - 1);

    F[n] = F[n - 2] + F[n - 1];

    return F[n];
}

int main()
{
    memset(F, -1, sizeof(F));

    int input = 7;
    int output = fibonacci(input);
    printf("%d\n", output);

    return 0;
}