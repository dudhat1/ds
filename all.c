#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void print(struct node *head)
{
    struct node* ptr=head;
    while(ptr!=NULL)
    {
        printf("\t%d",ptr->data);
        ptr=ptr->next;
    }
}
void insert_end(struct node **head_ref,int new_data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    struct node *ptr=*head_ref;
    temp->data=new_data;
    temp->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=temp;
    return;
}
void insert_beg(struct node **head_ref,int new_data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=new_data;
    temp->next=*head_ref;
    *head_ref=temp;
}
void delete_middle(struct node **head_ref,int key)
{
    struct node *temp=*head_ref,*prev;
    if(temp!=NULL&&temp->data==key)                        //for deleting the head
    {
        *head_ref=temp->next;
        free(temp);
        return;
    }
    while(temp!=NULL&&temp->data!=key)                    //for deleting after head to the NULL 
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    return;
    prev->next=temp->next;
    free(temp);
}
void delete_beginning(struct node **head_ref)
{
    struct node *temp=*head_ref;
    if(temp!=NULL)
    {
        *head_ref=temp->next;
        free(temp);
    }
}
void insert_middle(struct node **head_ref,int newdata, int pos)
{
    int i=2;
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data = newdata;

    struct node *temp = *head_ref;

    while(i<pos-1) 
    {
        if(temp->next != NULL) 
        {
            temp = temp->next;
        }
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void delete_end(struct node **head)
{
    struct node *temp=*head;
    if(temp->next == NULL)
    {
        if(head==NULL)
            printf("\nlist is empty");
        temp=*head;
        *head= temp->next;
        free(temp);
        return;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        temp->next = NULL;
        free(temp->next);
    }
}
int main()
{
    int choice,a,b,c,newdata,pos;
    struct node *head=NULL;
    do
    {
        printf("\n1.Insert End\n2.Insert Beginning\n3.Delete middle\n4.Delete Begining\n5.Delete End\n6.Insert middle\n9.print\n0.Exit");
        printf("\nEnter Your Choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Insert Value from end:");
            scanf("%d",&a);
            insert_end(&head,a);
            break;
        case 2:
            printf("Insert Value from Beginning:");
            scanf("%d",&b);
            insert_beg(&head,b);
            break;
        case 3:
            printf("Enter value which you want to delete:");
            scanf("%d",&c);
            delete_middle(&head,c);
            break;
        case 4:
            delete_beginning(&head);
            break;
        case 5:
            delete_end(&head);
            break;
        case 6:
            printf("\nEnter data to insert at middle: ");
            scanf("%d", &newdata);
            printf("Enter the position which you want to insert new node: " );
            scanf("%d", &pos);
            insert_middle(&head,newdata,pos);
            break;
        case 9:
            print(head);
            break;
        case 0:
            break;
        default:
            printf("\nInvalid Input");
        }
    } while (choice!=0);
}