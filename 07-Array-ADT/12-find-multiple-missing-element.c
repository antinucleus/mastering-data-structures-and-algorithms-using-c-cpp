#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("Elements of array\n");

    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

int FindMissingElement(struct Array *arr)
{
    int i = 0;
    int dif = (*arr).A[0] - i;

    for (i = 1; i < (*arr).size; i++)
    {
        if (((*arr).A[i] - i) != dif)
        {
            return i + dif;
        }
    }
    return 0;
}

int main()
{

    struct Array arr1 = {{3, 4, 5, 6, 8}, 10, 5};

    int result = FindMissingElement(&arr1);

    printf("resutl = %d \n", result);

    return 0;
}