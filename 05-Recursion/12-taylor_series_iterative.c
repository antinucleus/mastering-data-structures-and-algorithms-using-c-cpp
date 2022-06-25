#include <stdio.h>

double e(int x, int n)
{
    static double s = 1;
    double num = 1, den = 1;

    for (int i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }

    return s;
}

int main()
{
    int x = 1, n = 15;
    double output = e(x, n);
    printf("%lf\n", output);

    return 0;
}