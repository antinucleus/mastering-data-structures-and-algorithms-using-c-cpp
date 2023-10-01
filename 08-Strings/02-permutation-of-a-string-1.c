#include <stdio.h>

void swap(char *s, int x, int y)
{
    char temp = s[x];
    s[x] = s[y];
    s[y] = temp;
}

void perm(char s[], int l, int h)
{
    int i;

    if (l == h)
    {
        printf("%s\n", s);
    }
    else
    {
        for (i = l; i <= h; i++)
        {

            swap(s, l, i);
            perm(s, l + 1, h);
            swap(s, l, i);
        }
    }
}

int main()
{
    char s[] = "ABC";

    perm(s, 0, 2);
    return 0;
}