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

int RecursiveBinarySearch(int a[], int low, int high, int key)
{
    int mid;

    if (low <= high)
    {
        mid = (low + high) / 2;

        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return RecursiveBinarySearch(a, low, mid - 1, key);
        }
        else
        {
            return RecursiveBinarySearch(a, mid + 1, high, key);
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    int searchResult = RecursiveBinarySearch(arr.A, 0, arr.length, 5);

    printf("Search result = %d\n", searchResult);

    return 0;
}