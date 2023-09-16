#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int size;
    int top;
    char *arr;
};
int isempty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
void push(struct Stack *ptr, char val)
{
    if (isfull(ptr))
    {
        printf("Stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
char pop(struct Stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack underflow");
    }
    else
    {
        char ch = ptr->arr[ptr->top];
        ptr->top--;
        return ch;
    }
}
int paranthesismatching(char * exp)
{
    // creating and initialising stack
    struct Stack *s;
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    for (int i = 0; exp[i]!= '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(s, '(');
        }
        else if (exp[i] == ')')
        {
            if (isempty(s))
            {
                return 0;
            }
            else
            {
                pop(s);
            }
        }
    }
    if (isempty(s))
    {
        return 1;
    }
    return 0;
}

int main()
{

    char * exp = "3+4+(5*9)";
    if (paranthesismatching(exp))
    {
        printf("Paranthesis is matching");
    }
    else
    {
        printf("Paranthesis is not matching");
    }
    return 0;
}