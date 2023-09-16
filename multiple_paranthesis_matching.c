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
int match(char c, char d){
    if( c=='(' && d==')' ){
        return 1;
    }
     if( c=='{' && d=='}' ){
        return 1;
    }
     if( c=='[' && d==']' ){
        return 1;
    }
    return 0;
}
int paranthesismatching(char * exp)
{
    // creating and initialising stack
    struct Stack *s;
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char popped;
    for (int i = 0; exp[i]!= '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')' ||exp[i] ==  '}' || exp[i] == ']')
        {
            if (isempty(s))
            {
                return 0;
            }
            else
            {
                popped =pop(s);
                if(!match(popped,exp[i])){
                    return 0;
                }
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

    char * exp = "[{3+4+(5*9)}]";
    if (paranthesismatching(exp))
    {
        printf("Paranthesis is balanced");
    }
    else
    {
        printf("Paranthesis is not balanced");
    }
    return 0;
}