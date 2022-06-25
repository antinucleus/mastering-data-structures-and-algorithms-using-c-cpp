#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int input = 5;
    int output = fibonacci(input);

    printf("%d\n", output);

    return 0;
}