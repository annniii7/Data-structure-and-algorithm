#include <stdio.h>
void printArray(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", A[i]);
        printf(" ");
    }
    printf("\n");
}
void bubblesort(int *A, int size)
{
    for (int i = 0; i < size - 1; i++) // for the no of pass
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                A[j] = A[j] + A[j + 1];
                A[j+1] = A[j] - A[j + 1];
                A[j] = A[j] - A[j + 1];
            }
        }
    }
}
void bubblesortadaptive(int *A,int size){
    int issorted=0;
     for (int i = 0; i < size - 1; i++) // for the no of pass
    {
        printf("No of passes used to sort:%d\n",i+1);
        issorted=1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                A[j] = A[j] + A[j + 1];
                A[j+1] = A[j] - A[j + 1];
                A[j] = A[j] - A[j + 1];
                issorted=0;
            }
        }
        if (issorted)
        {
            return;
        }
        
    }

}
int main()
{
    // int A[] = {546, 12, 7, 2, 56, 71, 989};
    int A[]={1,7,8,11,15,20};
    int size = sizeof(A) / sizeof(int);
    printArray(A, size);
    bubblesortadaptive(A, size);//for sorted array!
    printArray(A,size);
    bubblesort(A,size);//used to sort array!
}