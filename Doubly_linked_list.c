#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
void linkedlisttraversal(struct Node *head,struct Node *fourth){
    while (head!=NULL)
    {
       printf("Element is %d\n",head->data);
    head=head->next;
    }
    printf("\n");
   while(fourth!=NULL){
    printf("Element is %d\n",fourth->data);
    fourth=fourth->prev;
   }
    
    
   
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
//linking head with second;
head->prev=NULL;
head->data=1;
head->next=second;
//linking second with third node
second->prev=head;
second->data=2;
second->next=third;
//linking third and fourth node
third->prev=second;
third->data=3;
third->next=fourth;
fourth->prev=third;
fourth->data=4;
fourth->next=NULL;
linkedlisttraversal(head,fourth);




}