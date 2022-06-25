#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Example 1
    /*
     struct Rectangle r = {10, 5};

     printf("length of rectangle :%d\n", r.length);
     printf("breadth of rectangle :%d\n", r.breadth);

     struct Rectangle *p = &r;
     printf("breadth of rectangle :%d\n", p->breadth); // for cpp lang syntax
     printf("length of rectangle :%d\n", p->length);   // for cpp lang syntax
    */

    // Example 2
    /*
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // c lang syntax
    // p = new Rectangle; // cpp lang syntax. Same as with code above

    (*p).length = 5;
    (*p).breadth = 7;

    // p->length = 5;  // cpp syntax. Same as with code above
    // p->breadth = 7; // cpp syntax. Same as with code above

    printf("length of rectangle :%d\n", p->length);   // for cpp lang syntax
    printf("breadth of rectangle :%d\n", p->breadth); // for cpp lang syntax
    */
    return 0;
}