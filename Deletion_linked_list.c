#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *ptr){
    while (ptr!=NULL)
    {
       printf("Element is %d\n",ptr->data);
    ptr=ptr->next;
    }
    }
//CASE 1
struct Node *deleteatstart(struct Node *head){
    struct Node *ptr;
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//CASE 2
struct Node *deleteatindex(struct Node *head,int index){
    struct Node *p=head;
    struct Node *q=head->next;
    for (int  i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
//CASE 3
struct Node *deleteatlast(struct Node *head){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
}
    p->next=NULL;
    free(q);
    return head;
    
}
//case 4 deleting at a given value
struct Node *deleteval(struct Node *head, int value){
    struct Node *p=head;
    struct Node *q=head->next;
   if(p->data==value){
        head=p->next;
        free(p);
        return head;
    }
     while (q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
    
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    printf("Linked list before deletion\n");
    linkedlisttraversal(head);
    printf("Linked lsit after deletion\n");
    // head = deleteatstart(head);
    // head=deleteatindex(head,2);
    // head=deleteatlast(head);
    head=deleteval(head,5);
    linkedlisttraversal(head);
    return 0;
}