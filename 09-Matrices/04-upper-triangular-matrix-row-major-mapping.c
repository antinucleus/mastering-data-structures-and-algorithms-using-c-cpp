#include <stdio.h>

struct Matrix
{
    int A[10];
    int n;
};

int GetIndex(int i, int j, int n)
{
    return n * (i - 1) - ((i - 2) * (i - 1) / 2) + j - i;
}

void Set(struct Matrix *m, int i, int j, int x)
{
    int index = GetIndex(i, j, m->n);

    if (i <= j)
    {
        m->A[index] = x;
    }
}

void Display(struct Matrix m)
{

    int i, j;

    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i <= j)
            {
                int index = GetIndex(i, j, m.n);
                printf("%4d", m.A[index]);
            }
            else
            {
                printf("%4d", 0);
            }
        }
        printf("\n");
    }
}

int main()
{
    struct Matrix M;

    M.n = 4;

    Set(&M, 1, 1, 15);
    Set(&M, 1, 2, 20);
    Set(&M, 1, 3, 45);
    Set(&M, 1, 4, 6);
    Set(&M, 2, 2, -1);
    Set(&M, 2, 3, 12);
    Set(&M, 2, 4, 11);
    Set(&M, 3, 3, 4);
    Set(&M, 3, 4, 7);
    Set(&M, 4, 4, 18);

    Display(M);

    return 0;
}