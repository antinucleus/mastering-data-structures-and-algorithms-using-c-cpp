#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
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

int main()
{
    int n, i;
    struct Array arr;
    printf("Enter size of an array\n");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers\n");
    scanf("%d", &n);

    printf("Enter all values\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    arr.length = n;

    Display(arr);

    return 0;
}