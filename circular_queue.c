#include<stdio.h>
#include<stdlib.h>
struct queue {
    int size;
    int f;
    int r;
    int *arr;

};
int isempty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;

}
int isfull(struct queue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;

}
void enqueue(struct queue *q,int val){
    if(isfull(q)){
        printf("queue is full\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("enqueuing element%d\n",val);
    }

}
int dequeue(struct queue *q){
    if(isempty(q)){
        printf("queue is empty\n");
        return -1;
    }
    else{
        q->f=(q->f+1)%q->size;
        int val=q->arr[q->f];
        return val;
    }
}
int main(){
     struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->size=4;
    q->f=0;
    q->r=0;
    q->arr=(int*)malloc(q->size*sizeof(int));
    //entering elements in the queue
    enqueue(q,5);
    enqueue(q,10);
    enqueue(q,10);
    if(isfull(q)){
        printf("queue is full\n");
    }
    printf("Dequeuing element %d\n",dequeue(q));
      printf("Dequeuing element %d\n",dequeue(q));
      printf("Dequeuing element %d\n",dequeue(q));
        enqueue(q,5);
    enqueue(q,10);
    enqueue(q,10);
     enqueue(q,10);
       if(isempty(q)){
        printf("queue is empty\n");
    }
    //   if(isfull(q)){
    //     printf("queue is full\n");
    // }
    return 0;

}