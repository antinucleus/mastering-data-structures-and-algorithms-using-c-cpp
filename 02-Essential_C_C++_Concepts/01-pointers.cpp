#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Rectange
{
    int length;
    int breadth;
};

int main()
{
    // Example 1
    /*
    int a = 10;
    int *p;
    p = &a;

    printf("Value of a :: %d\n", a);
    printf("Value of p   :: %d\n", p);
    printf("Address of a :: %d\n", &a);
    printf("Value of a using address of it   :: %d\n", *p);
    */

    // Example 2
    /*
    int A[5] = {2, 4, 6, 8, 10};
    int *p;

    p = A; // When attaching address of array to pointer we no need to use & because first element of array points address of array
           // p = &A[0]; // If we want to get address of its element then we use &

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", p[i]); // using pointer
        printf("%d\n", A[i]); // using array itself
    }
    */

    // Example 3
    /*
     int *p;
     p = (int *)malloc(5 * sizeof(int)); // for c lang
     // p = new int[5]; // for cpp lang dynamic allocating

     p[0] = 10;
     p[1] = 14;
     p[2] = 40;
     p[3] = 49;
     p[4] = 57;

     for (int i = 0; i < 5; i++)
     {
         printf("%d\n", p[i]);
     }
     free(p); // for c lang releasing memory after we used it
     // delete [ ] p; /7 for cpp lang releasing memory after we used it
    */

    // Example 4
    /*
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    // every pointer takes same amount of memory
    printf("%lu\n",sizeof(p1));
    printf("%lu\n",sizeof(p2));
    printf("%lu\n",sizeof(p3));
    printf("%lu\n",sizeof(p4));
    printf("%lu\n",sizeof(p5));
    */

    return 0;
}