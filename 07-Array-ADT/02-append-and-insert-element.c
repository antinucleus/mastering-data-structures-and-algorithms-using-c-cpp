#include <stdio.h>
#include <stdlib.h>

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

void Append(struct Array *arr, int x)
{
    if ((*arr).length < (*arr).size)
    {

        (*arr).A[(*arr).length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= (*arr).length)
    {
        int i = (*arr).length;
        for (i; i > index; i--)
        {
            (*arr).A[i] = (*arr).A[i - 1];
        }
        (*arr).A[index] = x;
        (*arr).length++;
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr);

    Append(&arr, 12);
    Display(arr);

    Insert(&arr, 3, 28);
    Display(arr);

    return 0;
}