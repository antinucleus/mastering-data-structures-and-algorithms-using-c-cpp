// Declarations are inside the class
/*
#include <iostream>
#include <stdio.h>
using namespace std;

class Arithmetic
{
private:
    int a;
    int b;

public:
    Arithmetic(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int add()
    {
        return a + b;
    }

    int sub()
    {
        return a - b;
    }
};

int main()
{
    Arithmetic ar(1, 2);
    printf("sum : %d\n", ar.add());

    return 0;
}
*/

// Declarations are outside the class

/*
#include <iostream>
#include <stdio.h>
using namespace std;

class Arithmetic
{
private:
    int a;
    int b;

public:
    Arithmetic(int a, int b);
    int add();
    int sub();
};

Arithmetic::Arithmetic(int a, int b)
{
    this->a = a;
    this->b = b;
}
int Arithmetic::add()
{
    return a + b;
}

int Arithmetic::sub()
{
    return a - b;
}

int main()
{
    Arithmetic ar(1, 2);
    printf("sum : %d\n", ar.add());

    return 0;
}
*/

// Template classes
/*
#include <iostream>
#include <stdio.h>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}
template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}

int main()
{
    Arithmetic<int> ar(1, 2);
    Arithmetic<float> ar2(1, 2);
    Arithmetic<double> ar3(1, 2);
    Arithmetic<char> ar4('A', 'B');

    printf("sum : %d\n", ar.add());
    printf("sum : %.2f\n", ar2.add());
    printf("sum : %.2f\n", ar3.add());
    printf("sum : %c\n", ar4.add());

    return 0;
}
*/