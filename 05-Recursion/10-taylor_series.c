#include <stdio.h>

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;

    r = e(x, n - 1);
    p *= x;
    f *= n;
    return r + p / f;
}

int main()
{
    int x = 1, n = 15;
    double output = e(x, n);
    printf("%.50lf\n", output);

    return 0;
}