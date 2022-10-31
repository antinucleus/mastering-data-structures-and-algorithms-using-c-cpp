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

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key)
{
    int i;

    for (i = 0; i < (*arr).length; i++)
    {
        if (key == (*arr).A[i])
        {
            swap(&(*arr).A[i], &(*arr).A[0]);
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr);

    int searchResult = LinearSearch(&arr, 5);

    printf("Search result = %d\n", searchResult);
    Display(arr);

    return 0;
}