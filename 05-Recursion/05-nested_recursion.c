#include <stdio.h>

int nested(int n)
{
    if (n > 100)
        return n - 10;

    return nested(nested(n + 11));
}

int main()
{
    int input = 20;
    int output = nested(input);
    printf("%d\n", output);

    return 0;
}