#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    return factorial(n - 1) * n;
}

int main()
{
    int input = 5;
    int output = factorial(input);
    printf("%d\n", output);

    return 0;
}