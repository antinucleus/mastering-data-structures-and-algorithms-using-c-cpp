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

int BinarySearch(struct Array arr, int key)
{

    int low, high, mid;
    low = 0;
    high = arr.length - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key > arr.A[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{1, 2, 3, 4, 5, 6, 10}, 10, 7};

    int searchResult = BinarySearch(arr, 6);

    printf("Search result = %d\n", searchResult);

    return 0;
}