#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int A[10];
    int n;
};

int GetIndex(int i, int j, int n)
{
    int result;

    if (i - j == 1)
    {
        result = i - 1;
    }
    if (i - j == 0)
    {
        result = n - 1 + i - 1;
    }
    if (i - j == -1)
    {
        result = 2 * n - 1 + i - 1;
    }

    return result;
}

void Set(struct Matrix *m, int i, int j, int x)
{
    int index = GetIndex(i, j, m->n);

    if (abs(i - j) <= 1)
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
            if (abs(i - j) <= 1)
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

    Set(&M, 2, 1, 1);
    Set(&M, 3, 2, 2);
    Set(&M, 4, 3, 3);
    Set(&M, 1, 1, 4);
    Set(&M, 2, 2, 5);
    Set(&M, 3, 3, 6);
    Set(&M, 4, 4, 7);
    Set(&M, 1, 2, 8);
    Set(&M, 2, 3, 9);
    Set(&M, 3, 4, -1);

    Display(M);

    return 0;
}