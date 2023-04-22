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
        exit(1);
    }
    else
    {
        newnode->data = value;
        newnode->next = top;
        top = newnode;
    }
}

void pop( value)
{
    if(top==NULL){
        printf("underflow");
        exit(1);
    }
    value = top->data;
    struct node *temp=top;
    top= top->next;
    free(temp);
    return value;

}

int main()
{
    push(10);
    push(20);
    push(30);

    printf("pooped value %d\n", pop());
    printf("pooped value %d\n", pop());
    printf("pooped value %d\n", pop());

    return 0;
}
