#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 11;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 22;
    current->link = NULL;

    head->link = head;
    current->link = current;

    printf("%d\t", head->link->data);
    printf("%d\t", current->link->data);
}