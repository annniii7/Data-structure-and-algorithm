#include<stdio.h>
#include<stdlib.h>
struct myarray
{ 
    int total_size;
    int used_size;
    int*ptr;
};
void createarr(struct myarray* a,int tsize,int usize){
    printf("createarr is executed\n");
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));// array is created using malloc function dynamically
}
void setval(struct myarray* a){
    int n;
    for (int i = 0; i <a->used_size; i++)
    {
        printf("enter element %d",i);
        scanf("%d",&n);
        a->ptr[i]=n;
        
    }    
}
void show(struct myarray *a){
    for (int i = 0; i <a->used_size; i++)
    {
        printf("%d\n",a->ptr[i]);
    }
    
}


int main(){
    struct myarray marks;
    createarr(&marks,10,2);
    printf("setval is excuted\n");
    setval(&marks);
    printf("show is executed\n");
    show(&marks);
}
