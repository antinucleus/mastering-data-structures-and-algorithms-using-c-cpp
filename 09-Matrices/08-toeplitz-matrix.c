#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int A[10];
    int n;
};

int GetIndex(int i, int j, int n)
{

    return i <= j ? (j - i) : (n + i - j - 1);
}

void Set(struct Matrix *m, int i, int j, int x)
{
    int index = GetIndex(i, j, m->n);

    m->A[index] = x;
}

void Display(struct Matrix m)
{

    int i, j;

    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            int index = GetIndex(i, j, m.n);
            printf("%4d", m.A[index]);
        }
        printf("\n");
    }
}

int main()
{
    struct Matrix M;

    M.n = 3;

    Set(&M, 1, 1, 1);
    Set(&M, 2, 2, 1);
    Set(&M, 3, 3, 1);

    Set(&M, 1, 2, 2);
    Set(&M, 2, 3, 2);

    Set(&M, 2, 1, 3);
    Set(&M, 3, 2, 3);

    Set(&M, 3, 1, 4);
    Set(&M, 1, 3, 5);

    Display(M);

    return 0;
}