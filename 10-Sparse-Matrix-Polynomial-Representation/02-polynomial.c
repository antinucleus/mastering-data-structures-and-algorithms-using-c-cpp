#include <stdio.h>
#include <stdlib.h>

struct Term
{
    int coeff;
    int exp;
};

struct Poly
{
    int n;
    struct Term terms[10];
};

void Display(struct Poly p, char title[10])
{
    int i;
    struct Term t;

    printf("%s", title);

    for (i = 0; i < p.n; i++)
    {
        t = p.terms[i];
        printf("%dx^%d %c ", t.coeff, t.exp, i == p.n - 1 ? 0 : '+');
    }
    printf("\n");
}

struct Poly AddPoly(struct Poly p1, struct Poly p2)
{
    int i = 0, j = 0, k = 0;
    struct Poly result;
    result.n = 0;

    while (i != p1.n && j != p2.n)
    {
        if (p1.terms[i].exp == p2.terms[j].exp)
        {
            result.terms[k].coeff = p1.terms[i].coeff + p2.terms[j].coeff;
            result.terms[k].exp = p1.terms[i].exp;
            i++;
            j++;
        }
        else if (p1.terms[i].exp > p2.terms[j].exp)
        {
            result.terms[k] = p1.terms[i];
            i++;
        }
        else
        {
            result.terms[k] = p2.terms[j];
            j++;
        }

        k++;
    }
    result.n = k;

    return result;
}

int main()
{
    struct Poly p1 = {.n = 5, .terms = {{3, 5}, {2, 4}, {5, 2}, {2, 1}, {7, 0}}};
    struct Poly p2 = {.n = 4, .terms = {{7, 5}, {5, 3}, {5, 2}, {1, 0}}};

    Display(p1, "poly1 = ");
    Display(p2, "poly2 = ");
    struct Poly result = AddPoly(p1, p2);
    Display(result, "result = ");

    return 0;
}