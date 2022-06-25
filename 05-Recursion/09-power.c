#include <stdio.h>

int power(int base, int pow)
{
    if (pow == 0)
        return 1;
    return power(base, pow - 1) * base;
}

int powerFast(int base, int pow)
{
    if (pow == 0)
        return 1;

    if (pow % 2 == 0)
        return powerFast(base * base, pow / 2);

    return base * powerFast(base * base, (pow - 1) / 2);
}

int main()
{

    int b = 2, p = 5;
    int output = powerFast(b, p);
    printf("%d\n", output);

    return 0;
}