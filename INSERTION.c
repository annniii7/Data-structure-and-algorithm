#include<stdio.h>
void display(int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
       printf(" ");
    }
    printf("\n");
}
int indinsertion(int arr[],int size,int element,int index,int capacity){
    if (size>=capacity)
    {
       return -1;
       printf("insertion failed");
    }
    for (int  i = size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    display(arr,size+1);
    return 1;
}
int main(){
    int arr[100]={7,8,27,31,88};
    int size=5,element=45,index=2;
    indinsertion(arr,size,element,index,100);
    size+=1;
    //display(arr,size);
}