#include <stdio.h>

void head(int n)
{
    if (n > 0)
    {
        head(n - 1);
        printf("%d ", n);
    }
}
int main()
{
    int input = 3;
    head(input);

    return 0;
}