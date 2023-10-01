#include <stdio.h>

struct Matrix
{
    int A[10];
    int n;
};

int GetIndex(int i, int j, int n)
{
    return n * (j - 1) - ((j - 2) * (j - 1) / 2) + i - j;
}

void Set(struct Matrix *m, int i, int j, int x)
{
    if (i >= j)
    {
        int index = GetIndex(i, j, m->n);
        m->A[index] = x;
    }
}

int Get(struct Matrix m, int i, int j)
{
    int index = GetIndex(i, j, m.n);

    if (i >= j)
        return m.A[index];

    return 0;
}

void Display(struct Matrix m)
{
    int i, j;

    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i >= j)
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
    Set(&M, 2, 1, 20);
    Set(&M, 2, 2, 45);
    Set(&M, 3, 1, -1);
    Set(&M, 3, 2, 12);
    Set(&M, 3, 3, 4);
    Set(&M, 4, 1, 7);
    Set(&M, 4, 2, 8);
    Set(&M, 4, 3, 11);
    Set(&M, 4, 4, 34);

    Display(M);

    // printf("%d\n", Get(M, 3, 3));

    return 0;
}