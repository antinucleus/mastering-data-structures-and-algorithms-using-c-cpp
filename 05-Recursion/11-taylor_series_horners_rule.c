#include <stdio.h>

double e(int x, int n)
{
    static double s = 1;

    if (n == 0)
        return s;

    s = 1 + x * s / n;
    return e(x, n - 1);
}

int main()
{
    int x = 1, n = 15;
    double output = e(x, n);
    printf("%lf\n", output);

    return 0;
}