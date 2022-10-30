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

int Delete(struct Array *arr, int index)
{
    int x = 0;
    int i;

    if (index >= 0 && index < (*arr).length)
    {
        x = (*arr).A[index];
        for (i = index; i < (*arr).length - 1; i++)
        {
            (*arr).A[i] = (*arr).A[i + 1];
        }
        (*arr).length--;
        return x;
    }
    return 0;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr);

    int deleteResult = Delete(&arr, 5);
    printf("Deleted element = %d\n", deleteResult);

    Display(arr);

    return 0;
}