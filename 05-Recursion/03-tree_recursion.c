#include <stdio.h>

void tree(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        tree(n - 1);
        tree(n - 1);
    }
}

int main()
{
    int input = 3;
    tree(input);
    return 0;
}