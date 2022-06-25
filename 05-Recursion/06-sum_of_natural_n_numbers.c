#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}

int main()
{
    int input = 5;
    int output = sum(input);
    printf("%d\n", output);

    return 0;
}