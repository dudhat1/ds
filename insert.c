#include <stdio.h>
int main()
{
    int a[34];
    int i, values, n, pos;
    printf("enter no of element:");
    scanf("%d", &n);
    printf("enter element:");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the element insert");
    scanf("%d", &pos);
    printf("enter the values:");
    scanf("%d", &values);
    for (i = n + 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = values;
    printf("enter element output:");
    for (i = 0; i <= n + 1; i++)
        printf("%d \n", a[i]);
    return 0;
}