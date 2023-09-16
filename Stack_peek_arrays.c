#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct Stack *ptr)
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
int isfull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct Stack *ptr, int value)
{
    if (isfull(ptr))
    {
        printf("Stack Overflow! cannot push %d to the stack\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct Stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack Underflow! Cannot pop from stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct Stack *ptr, int i)
{
    int arrIndex = ptr->top - i + 1;
    if (arrIndex < 0)
    {
        printf("Invalid Choice");
        return -1;
    }
    else
    {
        return ptr->arr[arrIndex];
    }
}
int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Before pushing Full:%d\n", isfull(s));
    printf("Before pushing Empty:%d\n", isempty(s));
    push(s, 10);
    push(s, 21);
    push(s, 37);
    push(s, 48);
    push(s, 99); // pushed 5 values
    // printing values from stack
    for (int j = 1; j <= s->top + 1; j++)
    {
        printf("The value at position %d is %d\n ", j, peek(s, j));
    }
}