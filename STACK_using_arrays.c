#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *s;
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    // pushing an elemnt manually
    s->arr[0]=1;
    s->top++;
     s->arr[1]=8;
    s->top++;
     s->arr[2]=5;
    s->top++;
     s->arr[3]=9;
    s->top++;
    s->arr[4]=4;
    s->top++;
    s->arr[5]=5;
    s->top++;
     // check if stack is empty
    if (isempty(s))
    {
        printf("The stack is empty");
    }
    // else
    //     printf("The stack is not empty");
    //cheackin if stack is full
    if(isfull(s)){
        printf("the stack is full");
    }
    else{
        printf("the stack is  not full");
    }
    return 0; 
}