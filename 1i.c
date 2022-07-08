#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void head_count(struct node *head)
{
    int cnt = 0;
    if (head == NULL)
        printf("\n List is Empty");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("\t %d", temp->data);
        cnt++;
        temp = temp->next;
    }
}
void insert_end(struct node **head_ref, int new_data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = new_data;
    temp->next = *head_ref;
    *head_ref = temp;
    // if (*head_ref == NULL)
    // {
    //     *head_ref = temp;
    //     return;
    // }
    // while (ptr->next != NULL)
    //     ptr = ptr->next;
    // ptr->next = temp;
    // return;
}
int main()
{
    struct node *head = NULL;
    insert_end(&head, 10);
    insert_end(&head, 11);
    insert_end(&head, 12);
    // insert_end(&head, 13);
    head_count(head);
    return 0;
}