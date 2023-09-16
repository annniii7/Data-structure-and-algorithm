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
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}
void postorder(struct node *root){
    if(root!=NULL){
       postorder(root->left);
       postorder(root->right);
       printf("%d ",root->data);
    }
}
int main(){
      // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2  
       struct node *A=createnode(4);
     struct node *b=createnode(1); 
     struct node *c=createnode(6);
     A->left=b;
     A->right=c;
      struct node *d=createnode(5); 
       struct node *e=createnode(2); 
       b->left=d;
       b->right=e;
       postorder(A);
       return 0;
}