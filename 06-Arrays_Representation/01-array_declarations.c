#include <stdio.h>
void printElements(int size, char name, int array[]);
int main()
{
    int A[5];                   // this will be filled with garbage values
    int B[] = {2, 4, 6, 8, 10}; // size of B will be its element count
    int C[10] = {2, 4, 6};      // remaining spaces will be filled with 0

    printElements(5, 'A', A);
    printElements(5, 'B', B);
    printElements(10, 'C', C);

    printf("%d\n", B[0]);
    printf("%d\n", 3 [B]);
    printf("%d\n", *(B + 2));

    return 0;
}

void printElements(int size, char name, int array[])
{
    printf("%s %c\n", "Elements of", name);

    for (int i = 0; i < size; i++)
    {
        printf("%c[%d] = %d\n", name, i, array[i]);
    }
}