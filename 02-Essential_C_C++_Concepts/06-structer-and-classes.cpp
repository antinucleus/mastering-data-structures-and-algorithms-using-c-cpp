// C lang modular (procedural) code style

/*
#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void initialise(struct Rectangle *r, int l, int b)
{
    (*r).length = l;
    (*r).breadth = b;
}

int area(struct Rectangle r)
{
    return r.breadth * r.length;
}

int perimeter(struct Rectangle r)
{
    return 2 * (r.breadth + r.length);
}

int main()
{
    struct Rectangle r;
    initialise(&r, 10, 20);
    printf("length : %d\nbreadth : %d\n", r.length, r.breadth);
    int a = area(r);
    printf("area : %d\n", a);
    int peri = perimeter(r);
    printf("perimter : %d\n", peri);

    return 0;
}
*/

// This is another C lang modular (procedural) code style

/*
#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
    void initialise(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return breadth * length;
    }

    int perimeter()
    {
        return 2 * (breadth + length);
    }
};

int main()
{
    struct Rectangle r = {1, 2}; // We can initialize struct like this
    // r.initialise(10, 20); // Or we  can call initialize function
    printf("length : %d\nbreadth : %d\n", r.length, r.breadth);
    int a = r.area();
    printf("area : %d\n", a);
    int peri = r.perimeter();
    printf("perimter : %d\n", peri);

    return 0;
}
*/

// This is cpp lang OOP code style

/*
#include <stdio.h>

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return breadth * length;
    }

    int perimeter()
    {
        return 2 * (breadth + length);
    }
};

int main()
{
    Rectangle r(10, 20);
    int a = r.area();
    printf("area : %d\n", a);
    int peri = r.perimeter();
    printf("perimter : %d\n", peri);

    return 0;
}

*/