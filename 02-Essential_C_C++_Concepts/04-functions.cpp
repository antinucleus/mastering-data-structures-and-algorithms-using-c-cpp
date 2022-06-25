#include <stdio.h>

int add(int a, int b)
{
    return a + b;
};

int main()
{
    int n1 = 10, n2 = 25, sum;
    sum = add(n1, n2);
    printf("sum : %d\n", sum);
    return 0;
}