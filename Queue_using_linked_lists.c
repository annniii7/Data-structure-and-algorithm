#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *f = NULL;
struct node *r = NULL;



void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
            printf("enqueued value %d\n", val);
        }
        else
        {
            r->next = n;
            r = n;
            printf("enqueued value %d\n", val);
        }
    }
}
int dequeue()
{
    int a=-1;
    struct node *ptr = f;
    if (f==NULL)
    {
        printf("queue is empty\n");
    }
    else
    {
        f = f->next;
         a = ptr->data;
        free(ptr);
    }
    return a;
}


int main()
{
    // printf("Dequeuing element %d\n", dequeue());
    enqueue(4);
    enqueue(17);
    enqueue(21);
    enqueue(54);

    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    printf("Dequeuing element %d\n", dequeue());
    return 0;
}
