#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
 void traverse(struct node *ptr)
 {
    while(ptr != NULL){
        printf("element : %d \n", ptr->data);
        ptr = ptr->next;
    }
 }
 
int main()
{

    // allocate memory for the node in the  linked list  in heap

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next = NULL;

    travarsal(head);

    return 0;
}
