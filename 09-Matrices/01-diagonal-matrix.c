#include <stdio.h>

struct Matrix
{

    int A[10];
    int n;
};

void Set(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
        m->A[i - 1] = x;
}

int Get(struct Matrix m, int i, int j)
{
    if (i == j)
        return m.A[i - 1];

    return 0;
}

void Display(struct Matrix m)
{
    int i, j;

    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i == j)
            {
                printf("%d ", m.A[i]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{

    struct Matrix M;
    M.n = 4;

    Set(&M, 1, 1, 5);
    Set(&M, 2, 2, 7);
    Set(&M, 3, 3, 9);
    Set(&M, 4, 4, -3);

    // printf("%d\n", Get(M, 1, 1));

    Display(M);

    return 0;
}