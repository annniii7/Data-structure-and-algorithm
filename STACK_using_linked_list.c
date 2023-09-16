#include <stdio.h>
#include <stdlib.h>
struct Node
{ // formation of linked list
    int data;
    struct Node *next;
};


 // struct Node *top = NULL; ->declaring top as global variable


void linkedlisttraversal(struct Node *top)
{ // printing linked list
    while (top != NULL)
    {
        printf("ELEMENT:%d\n", top->data);
        top = top->next;
    }
}
int isempty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct Node *top)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct Node *push(struct Node *top, int x)
{
    if (isfull(top))
    {
        printf("Stack overflow");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top=n;
        return top;
    }
}
int pop(struct Node **top)
{
    if (isempty(top))
    {
        printf("stack underflow");
    }
    else
    {

        struct Node *ptr = *top;
        int x = ptr->data;
        *top=(*top)->next;
        free(ptr);
        return x;
    }
}
int peek(struct Node **top,int pos){
    struct Node *ptr=*top;
    for (int i = 0;(i < pos -1 && ptr!=NULL) ; i++)
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }
    else
    return -1;
    
}
int stacktop(struct Node *top){
    return top->data;
}
int stackbottom(struct Node *top){
    struct Node *ptr=top;
    while (ptr->next!=NULL)
    {
      ptr=ptr->next;
    }
    return ptr->data;
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 7);
//     top = push(top, 9);
//     top = push(top, 11);
//     top = push(top, 13);
//     top = push(top, 19);
//     printf("After pushing the stack is\n");
    linkedlisttraversal(top);
//     printf("Popped element is %d\n", pop(&top));// insted of using &top we can laso declare top as global variable.
//     printf("Popped element is %d\n", pop(&top));
//      linkedlisttraversal(top);
//     // printf("after poppping the first element the stack is\n");
//     // linkedlisttraversal(top);
//    printf("%d\n",peek(&top,2));
//    printf("%d\n",stackbottom(top));
//    printf("%d\n",stacktop(top));
}