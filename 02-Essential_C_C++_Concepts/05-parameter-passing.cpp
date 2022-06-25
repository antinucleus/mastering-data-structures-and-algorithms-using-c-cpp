#include <stdio.h>
#include <stdlib.h>
// #include <iostream>

/*
// Call by value
int add(int a, int b)
{
    // int c;
    // c = a + b;
    // return c;
    a++;
    return 0;
}
*/

/*
// Call by address
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
*/

/*
// Call by reference this only be used in cpp lang.
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
*/

/*
// Array as a parameter
void func(int *X ) // or int X[]
{
    printf("FUNC : %lu\n", sizeof(X) / sizeof(int));
};
*/

/*
int *func(int size)
{
    int *p;
    p = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
};
*/

/*
struct Rectangle
{
    int length;
    int breadth;
};

void func(struct Rectangle *r) // if parameter r instead *r
{
    // also here is r.length=20 instead (*r).length=20
    (*r).length = 20;
    // after process above the length value of original r inside the main func will not be change
    printf("Length %d\nBreadth %d\n", (*r).length, (*r).breadth);
}
*/

/*
struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle *func()
{
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    (*p).length = 15;
    (*p).breadth = 7;
    return p;
}
*/

int main()
{

    // Example 1
    /*
    int n1 = 10, n2 = 15, sum;
    // add(n1, n2);
    // swap(&n1, &n2);
    printf("Before swap \nnum1 : %d\tnum2 : %d\n", n1, n2);
    swap(n1, n2);
    printf("After  swap \nnum1 : %d\tnum2 : %d\n", n1, n2);
    */

    // Example 2
    /*
    int A[] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        printf("%-3d", A[i]);
    }
    printf("\n");

    // This not print actual size of the Array.Because its parameter is pointer and each pointer's size is 8 byte so 8/4 = 2
    func(A);
    // This print actual size of the Array inside the main func
    printf("MAIN : %lu\n", sizeof(A) / sizeof(int));
    */

    // Example 3
    /*
    int *ptr, size = 5;
    ptr = func(size);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ptr[i]);
    }
    */

    // Example 4
    /*
     struct Rectangle r = {10, 5};
     func(&r);
     printf("Length %d\nBreadth %d\n", r.length, r.breadth);
    */

    // Example 5
    /*
    struct Rectangle *ptr = func();
    printf("Length %d\nBreadth %d\n", (*ptr).length, (*ptr).breadth);
    free(ptr);
    */

    return 0;
}