#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void head_count(struct node *head)
{
    int cnt = 0;
    if (head == NULL)
        printf("\n List is empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("\t %d", ptr->data);
        cnt++;
        ptr = ptr->next;
    }
}
void insert_beg(struct node **head_ref, int new_data) // last add
{

    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = new_data;
    temp->next = (*head_ref);
    (*head_ref) = temp;
}
void insert_end(struct node **head_ref, int new_data)
{
    struct node *ptr = *head_ref;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    temp->data = new_data;
    if (*head_ref == NULL)
    {
        *head_ref = temp;
        return;
    }
    while (ptr->next != NULL)

        ptr = ptr->next;
    ptr->next = temp;
    return;
}
void delete (struct node **head_ref, int key)
{

    struct node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;

    free(temp);
}
int main()
{
    struct node *head = NULL;

    // add(&head, 1);
    // add(&head, 2);
    // add(&head, 3);

    insert_end(&head, 11);
    insert_end(&head, 10);
    insert_end(&head, 12);
    insert_end(&head, 13);

    // delete (&head, 1);

    head_count(head);
    return 0;
}