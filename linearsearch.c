#include<stdio.h>
int linearseach(int arr[],int size,int element){
    for (int i = 0; i <size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
    }
    return -1;

}
int main(){
    int arr[]={1,4,27,54,64,72,89,98,100,128,157};
    int size=sizeof(arr)/sizeof(int);
    int element=99;
    int searchindex=linearseach(arr,size,element);
    printf("The element %d is at index %d",element,searchindex);
    return 0;
    }