#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
void linkedlisttraversal(struct Node *head){
    struct Node *ptr=head;
    do
    {
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
        
    } while (ptr!=head);
    
}
//INSERTION AT BEGINNING
struct Node *inseratstart(struct Node *head, int data){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *q=head;
    ptr->next=head;
    while (q->next!=head)
    {
        q=q->next;
    }
    q->next=ptr;
    return ptr;
    
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
    fourth->next=head;// linking the last element with the first one
    printf(" Circular linked lsit before insertion\n");
    linkedlisttraversal(head);
    printf("C ircular Linked lsit after insertion\n");
    head=inseratstart(head,0);
    linkedlisttraversal(head);

    return 0;
    

    

}