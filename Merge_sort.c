#include<stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
        printf(" ");
    }
    printf("\n");
}
void merge(int *A,int low,int mid,int high){
    int i=low;
    int j=mid+1;
    int k=low;
    int B[100];
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else 
        {
        B[k]=A[j];
        j++;
        k++;
        }
    }
    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=high){
        B[k]=A[j];
        j++;
        k++;
    }
    for (int i = 0; i <=high; i++)
    {
        A[i]=B[i];
    }
    
}
void mergesort(int *A,int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(A,low,mid);
        mergesort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}
int main(){
    int A[]={9, 1, 4, 14, 4, 15, 6};
    int n=sizeof(A)/sizeof(int);
    printArray(A,n);
    mergesort(A,0,n-1);
    printArray(A,n);

}