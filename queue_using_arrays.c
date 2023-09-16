#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct queue *q){
    if(q->f==q->r){
      return 1;
    }
    return 0;

}
int isfull(struct queue *q){
    if(q->r==q->size-1){
      return 1;
    }
    return 0;

}
void enqueue(struct queue *q,int val){
    if(isfull(q)){
        printf("queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;

    }
}
int dequeue(struct queue *q){
    if(isempty(q)){
        printf("queue is empty\n");
        return -1;
    }
    else{
        q->f++;
        int a=q->arr[q->f];
        return a;
    }
    
}
int main(){
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->size=100;
    q->f=-1;
    q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));
    //entering elements in the queue
    enqueue(q,5);
    enqueue(q,10);
    // if(isfull(q)){
    //     printf("queue is full\n");
    // }
    printf("Dequeuing element %d\n",dequeue(q));
      printf("Dequeuing element %d\n",dequeue(q));
      printf("Dequeuing element %d\n",dequeue(q));
    //    if(isempty(q)){
    //     printf("queue is empty\n");
    // }
    return 0;
}