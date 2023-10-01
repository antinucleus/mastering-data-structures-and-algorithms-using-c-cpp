#include <stdio.h>
struct Data
{
    int row;
    int column;
    int value;
};

struct SparseMatrix
{
    struct Data data[10];
    int row;
    int column;
    int nonZeroElementCount;
};

void Display(struct SparseMatrix m)
{
    int i, j, k = 0;

    for (i = 1; i <= m.row; i++)
    {
        for (j = 1; j <= m.column; j++)
        {
            if (i == m.data[k].row && j == m.data[k].column)
            {
                printf("%4d", m.data[k++].value);
            }
            else
            {
                printf("%4d", 0);
            }
        }
        printf("\n\n");
    }
}

struct SparseMatrix Sum(struct SparseMatrix m1, struct SparseMatrix m2)
{
    struct Data firstElement, secondElement;
    struct SparseMatrix result;
    result.row = m1.row;
    result.column = m1.column;

    int i = 0, j = 0, k = 0;

    while (i != m1.nonZeroElementCount && j != m2.nonZeroElementCount)
    {
        firstElement = m1.data[i];
        secondElement = m2.data[j];

        if (firstElement.row < secondElement.row)
        {
            result.data[k] = firstElement;
            i++;
        }
        else if (firstElement.row > secondElement.row)
        {
            result.data[k] = secondElement;
            j++;
        }
        else
        {
            if (firstElement.column < secondElement.column)
            {
                result.data[k] = firstElement;
                i++;
            }
            else if (firstElement.column > secondElement.column)
            {
                result.data[k] = secondElement;
                j++;
            }
            else
            {
                result.data[k] = firstElement;
                result.data[k].value = firstElement.value + secondElement.value;
                i++;
                j++;
            }
        }
        k++;
    }

    return result;
}

int main()
{
    struct SparseMatrix m1 =
        {.row = 5, .column = 6, .nonZeroElementCount = 5, .data = {{1, 4, 6}, {2, 2, 7}, {3, 2, 2}, {3, 4, 5}, {5, 1, 4}}};

    struct SparseMatrix m2 =
        {.row = 5, .column = 6, .nonZeroElementCount = 6, .data = {{2, 2, 3}, {2, 5, 5}, {3, 3, 2}, {3, 6, 7}, {4, 4, 9}, {5, 1, 8}}};

    printf("-------First Matrix-------\n\n");
    Display(m1);
    printf("-------Second Matrix-------\n\n");
    Display(m2);
    struct SparseMatrix Result = Sum(m1, m2);
    printf("-------Result Matrix-------\n\n");
    Display(Result);
    return 0;
}