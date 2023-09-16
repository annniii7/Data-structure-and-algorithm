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

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;
    struct Node *eight;
    //allocate memory for nodes in the linked list in heap
    head=(struct Node*)malloc(sizeof(struct Node));
     second=(struct Node*)malloc(sizeof(struct Node));
      third=(struct Node*)malloc(sizeof(struct Node));
       fourth=(struct Node*)malloc(sizeof(struct Node));
        fifth=(struct Node*)malloc(sizeof(struct Node));
         sixth=(struct Node*)malloc(sizeof(struct Node));
          seventh=(struct Node*)malloc(sizeof(struct Node));
           eight=(struct Node*)malloc(sizeof(struct Node));
           // link first and second node
           head->data=7;
           head->next=second;
           //link second and third node
           second->data=10;
           second->next=third;
           //link third and fourth node
           third->data=12;
           third->next=fourth;
           //link fouth and fifth node
           fourth->data=13;
           fourth->next=fifth;
           //link fifth and sixth node
           fifth->data=16;
           fifth->next=sixth;
           //link sixth and seventh node
           sixth->data=99;
           sixth->next=seventh;
           //link seventh and eight node
           seventh->data=101;
           seventh->next=eight;
           //TERMINATE THE LIST AT EIGHT NODE
           eight->data=150;
           eight->next=NULL;
           linkedlisttraversal(head);
           return 0;


}