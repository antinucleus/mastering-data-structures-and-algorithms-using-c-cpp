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

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < (*arr).length)
    {
        (*arr).A[index] = x;
    }
}

int Max(struct Array arr)
{
    int max = arr.A[0];

    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];

    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr)
{
    int s = 0;
    int i;

    for (i = 0; i < arr.length; i++)
    {
        s += arr.A[i];
    }

    return s;
}

float Avg(struct Array arr)
{

    return (float)Sum(arr) / arr.length;
}

void Reverse(struct Array *arr)
{
    int temp;
    for (int i = 0; i < (*arr).length / 2; i++)
    {
        temp = (*arr).A[i];
        (*arr).A[i] = (*arr).A[(*arr).length - i - 1];
        (*arr).A[(*arr).length - i - 1] = temp;
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6, 7, 49}, 10, 7};
    Display(arr);

    printf("Get value at %d. index = %d\n", 3, Get(arr, 3));

    printf("Get max value of array = %d\n", Max(arr));
    printf("Get min value of array = %d\n", Min(arr));
    printf("Sum of array's elements = %d\n", Sum(arr));
    printf("Averege of array's elements = %.2f\n", Avg(arr));

    Reverse(&arr);
    Display(arr);

    Set(&arr, 6, 15);
    Display(arr);

    return 0;
}