#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void printArray(int *A,int n){
    for (int i = 0; i <n; i++)
    {
        printf("%d",A[i]);
        printf(" ");
    }
    printf("\n");
}
int Maximum(int *A,int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
    
}
void countsort(int *A,int n){
    int i,j;
     // Find the maximum element in A
    int max=Maximum(A,n); 
       // Create the count array
    int *count=(int *)malloc((max+1)*sizeof(int));
      // Initialize the array elements to 0
      for (int i = 0; i <=max; i++)
      {
        count[i]=0;
      }
      
    // Increment the corresponding index in the count array
    for (int i = 0; i <n; i++)
    {
       count[A[i]]=count[A[i]]+1;
    }
    i=0;//countyer for count array
    j=0;//counter for given array 
    while (i<=max)
    {
        if(count[i]>0){
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else
        {
            i++;
        }
        
        
    }
}
int main(){
    int A[]={9, 1, 4, 14, 4, 15, 6};
    int n=sizeof(A)/sizeof(int);
    printArray(A,n);
    countsort(A,n);
     printArray(A,n);
}