#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        printf(" ");
    }
    printf("\n");
}
void selectionsort(int *A, int n)
{
    int indexofmin, temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexofmin=i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexofmin])
            {
                indexofmin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexofmin];
        A[indexofmin] = temp;
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12};
    int n = sizeof(A) / sizeof(int);
    printArray(A, n);
    selectionsort(A, n);
    printArray(A, n);
}