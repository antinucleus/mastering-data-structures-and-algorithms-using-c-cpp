#include <stdio.h>
#include <stdlib.h>
void printElements(int size, char name, int array[]);

int main()
{

    int *p;

    p = (int *)malloc(5 * sizeof(int)); // allocation memory in c lang
    // p = new int[5];                  // allocation memory in cpp lang

    *p = 3; // this is also equal to *(p+0) = 3
    *(p + 1) = 2;
    p[2] = 7;

    //  we can access elements of array using these methods
    printf("%d\n", *p);
    printf("%d\n", p[1]);
    printf("%d\n", *(p + 2));

    // some addresses
    printf("%p\n", p);
    printf("%p\n", &p[0]);
    printf("%p\n", p + 1);

    free(p); // releasition memory in c lang
    // delete[] p; // releasition memory in cpp lang

    // Increase size of array
    int *x, *y;

    x = (int *)malloc(5 * sizeof(int));
    x[0] = 3;
    x[1] = 42;
    x[2] = 16;
    *(x + 3) = 26;
    x[4] = 78;

    printElements(5, 'X', x);

    y = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 5; i++)
        y[i] = x[i];

    printElements(5, 'Y', y);

    free(x);
    x = y;
    y = NULL;

    printElements(5, 'X', x);

    return 0;
}

void printElements(int size, char name, int array[])
{
    printf("%s %c\n", "Elements of", name);

    for (int i = 0; i < size; i++)
    {
        printf("%c[%d] = %d\n", name, i, array[i]);
    }
}