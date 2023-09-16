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
struct Node * insertatfirst(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;

}
//CASE 2
struct Node *insertatIndex(struct Node *head,int data,int index){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data=data;
    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
  ptr->next=p->next;
   p->next=ptr;
   return head;
    
}
//CASE 3
struct Node *insertatEnd(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    ptr->data=data;
    while (p->next!=NULL)
    {
      p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
    }
//CASE 4
struct Node *insertafterNode(struct Node *head,struct Node *prevnode, int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
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
    printf("Linked list before insertion\n");
    linkedlisttraversal(head);
    printf("Linked list after insertion\n");
    // head=insertatfirst(head,0);
    // head=insertatIndex(head,99,2);
    // head=insertatEnd(head,99);
    head=insertafterNode(head,third,99);
    linkedlisttraversal(head);
    return 0;
}