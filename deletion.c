#include<stdio.h>
void display(int arr[],int n){
    for (int i = 0; i <n; i++)
    {
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n");
}
void inddeletion(int arr[],int size,int index){
    //code for deletion
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    

}
int main(){
    int arr[100]={7,8,27,31,88};
    int size=5,index=4;
    inddeletion(arr,size,index);
    size-=1;
    display(arr,size);
}