#include<stdio.h>
int binarysearch(int arr[],int size,int element){
    int low=0,mid,high;
    high=size-1;
    while (low<=high)
    {

     mid=(low+high)/2;
    if(arr[mid]==element){
        return mid;
    }
    if (element<arr[mid])
    {
      high=mid-1;
    }
   else{
    low=mid+1;
   }
        
    }
    return -1;
    }
int main(){
    int arr[]={1,14,29,38,55,128,465,999,1001};
    int size=sizeof(arr)/sizeof(int);
    int element=465;
    int searchindex=binarysearch(arr,size,element);
    printf("The element %d is at index  %d",element,searchindex);
}