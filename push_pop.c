#include <stdio.h>
int top = -1, a[10], x, i, n = 4;
void push()
{
    if (top == n - 1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf(" Enter a value:");
        scanf("%d", &x);
        a[++top] = x;
    }
}
void pop()
{
    if (top < 0)
    {
        printf("\n\t Stack is under flow");
    }
    else

        top--;
}
void display()
{
    for (i = top; i >= 0; i--)
        printf("\n%d", a[i]);
}
int main()
{
    int choice;
    do
    {
        printf("\n1.Push\n2.Pop\n3.display\n9.Exit");
        printf("\nEnter Your Choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 9:
            break;

        default:
            printf("invalid input");
            break;
        }
    } while (choice != 9);
}