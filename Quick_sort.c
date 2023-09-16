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
int partition(int *A,int low,int high){
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;
    do
    {
         
    while (A[i]<=pivot)
    {
              i++;
    }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        }
        
    } while (i<j);
    // swap A[low] and A[j]
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
   

}
void quicksort(int *A, int low, int high)
{
    int partitionindex;// index of pivot after partition
    if (low < high)
    {
        int partioindex = partition(A, low, high);
        printArray(A,10);
        quicksort(A, low, partioindex - 1);//sort left subarray
        quicksort(A, partioindex + 1, high);//sort right subrray
    }
}
int main()
{
    int A[] = {2, 1, 3, 9, 4, 4, 8, 7, 5, 6};
    int n = sizeof(A) / sizeof(int);
    printArray(A, n);
    quicksort(A, 0, n - 1);
     printArray(A, n);
}
// 2 1 3 9 4 4 8 7 5 6 
// 1 2 3 9 4 4 8 7 5 6 ->>> after first partitioning    
// 1 2 3 9 4 4 8 7 5 6
// 1 2 3 6 4 4 8 7 5 9
// 1 2 3 5 4 4 6 7 8 9
// 1 2 3 4 4 5 6 7 8 9
// 1 2 3 4 4 5 6 7 8 9
// 1 2 3 4 4 5 6 7 8 9
// 1 2 3 4 4 5 6 7 8 9