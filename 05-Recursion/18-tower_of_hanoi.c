#include <stdio.h>

void hanoiTower(int n, int A, int B, int C)
{
    if (n > 0)
    {
        hanoiTower(n - 1, A, C, B);
        printf("(%d,%d)\n", A, C);
        hanoiTower(n - 1, B, A, C);
    }
}

int main()
{
    hanoiTower(3, 1, 2, 3);
    return 0;
}