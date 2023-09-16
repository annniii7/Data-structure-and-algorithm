#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right; 
};
struct node *createnode(int data){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
}
int main(){
    struct node *r=createnode(2);
     struct node *c1=createnode(1); 
     struct node *c2=createnode(4);
     r->left=c1;
     r->right=c2;
      struct node *gc1=createnode(11);
       struct node *gc2=createnode(12);
       c1->left=gc1;
       c1->right=gc2;
          struct node *gc4=createnode(11);
       c2->left=NULL;
       c2->right=gc4;
       gc1->left=NULL;
       gc1->right=NULL;
       gc2->left=NULL;
       gc2->right=NULL;
       gc4->left=NULL;
       gc4->right=NULL;
}