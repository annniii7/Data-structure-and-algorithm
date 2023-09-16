#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=NULL;
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENT IS:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node *top)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}
struct node *push(struct node *top, int val)
{
    if (isfull(top))
    {
        printf("stack overflow");
    }
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->next = top;
    top = n;
    return top;
}
int pop(struct node **top)
{
    if (isempty(top))
    {
        printf("stack underflow");
    }
    else
    {

        struct node *ptr = *top;
        int x = ptr->data;
        *top=(*top)->next;
        free(ptr);
        return x;
    }
}
int main()
{
    top = push(top, 0);
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 5);
    linkedlisttraversal(top);
     printf("element popped successfully:%d\n",pop(&top));
     printf("element popped successfully:%d\n",pop(&top));
     linkedlisttraversal(top);
  
  return 0;
}
//(struct node*)malloc(sizeof(struct node));