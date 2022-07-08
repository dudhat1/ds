 #include <stdio.h>
int a[10], x, f = -1, r = -1, n = 3;
void insert()
{
    printf("enter the value:");
    scanf("%d", &x);
    if (r == n - 1)
    {
        printf("\n queue full");
    }
    else if (f == -1 && r == -1)
    {
        f = 0, r = 0;
        a[r] = x;
    }
    else
    {
        a[++r] = x;
    }
}
void delete ()
{
    if (f == -1 && r == -1)
    {
        printf("\n queue is empty");
    }
    else if (f == r)
    {
        f = -1, r = -1;
        x = a[r];
    }
    else
    {
        f++;
    }
}
void display()
{
    printf("\n");
    for (int i = f; i <= r; i++)
        printf("\n %d", a[i]);
}
int main()
{
    int choice;
    do
    {
        printf("\n1.insert\n2.delete\n3.display\n4.exit");
        printf("\n enter the choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("invalid input");
            break;
        }

    } while (choice != 4);
}