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

struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < (*arr1).length && j < (*arr2).length)
    {
        if ((*arr1).A[i] < (*arr2).A[j])
        {
            (*arr3).A[k++] = (*arr1).A[i++];
        }
        else if ((*arr2).A[j] < (*arr1).A[i])
        {
            (*arr3).A[k++] = (*arr2).A[j++];
        }
        else
        {
            (*arr3).A[k++] = (*arr1).A[i++];
            j++;
        }
    }

    for (; i < (*arr1).length; i++)
    {
        (*arr3).A[k++] = (*arr1).A[i];
    }
    for (; j < (*arr2).length; j++)
    {
        (*arr3).A[k++] = (*arr2).A[j];
    }

    (*arr3).length = k;
    (*arr3).size = 10;

    return arr3;
}

struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < (*arr1).length && j < (*arr2).length)
    {
        if ((*arr1).A[i] < (*arr2).A[j])
        {
            i++;
        }
        else if ((*arr2).A[j] < (*arr1).A[i])
        {
            j++;
        }
        else if ((*arr2).A[j] == (*arr1).A[i])
        {
            (*arr3).A[k++] = (*arr1).A[i++];
            j++;
        }
    }

    (*arr3).length = k;
    (*arr3).size = 10;

    return arr3;
}

struct Array *Difference(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < (*arr1).length && j < (*arr2).length)
    {
        if ((*arr1).A[i] < (*arr2).A[j])
        {
            (*arr3).A[k++] = (*arr1).A[i++];
        }
        else if ((*arr2).A[j] < (*arr1).A[i])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }

    for (; i < (*arr1).length; i++)
    {
        (*arr3).A[k++] = (*arr1).A[i];
    }

    (*arr3).length = k;
    (*arr3).size = 10;

    return arr3;
}

int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};

    // struct Array *union = Union(&arr1, &arr2);

    // struct Array *intersection = Intersection(&arr1, &arr2);

    struct Array *difference = Difference(&arr1, &arr2);

    Display(*difference);

    return 0;
}