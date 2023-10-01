#include <stdio.h>

void perm(char s[], int K)
{
    static int A[10] = {};
    static char Res[10];
    int i = 0;

    if (s[K] == '\0' && Res[K] == '\0')
    {
        printf("%s\n", Res);
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                Res[K] = s[i];
                A[i] = 1;
                perm(s, K + 1);
                A[i] = 0;
            }
        }
    }
}

int main()
{

    char s[] = "ABC";
    int K = 0;

    perm(s, K);

    return 0;
}
