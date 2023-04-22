#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("memory allocation error");
    }
    else
    {
        newnode->data = value;
        newnode->next = top;
        top = value;
    }
}

void pop(value)
{
    struct *temp=top;
    int value = top->data;
    top= top->next;
    return value;
}

int main()
{
    push(7);
    push(9);
    push(8);

    printf("pooped value %d\n", pop());
    printf("pooped value %d\n", pop());
    printf("pooped value %d\n", pop());

    return 0;
}