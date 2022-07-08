#include <stdio.h>
void searching(int n)
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80}, i;
    for (i = 0; i < n; ++i)
    {
        if (a[i] == n)
            break;
    }
    if (i < n)
    {
        printf("element found at %d", i);
    }
    else
    {
        printf("element not found");
    }
}
int main()  
{
    int n;
    printf("enter the element");
    scanf("%d", &n);
    searching(n);
}