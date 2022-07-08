#include <stdio.h>
int main()
{
    int i, a[10];
    printf("enter the array:");
    scanf("%d", a);
    for (i = 0; a[i] != '\0'; i++);
    printf("\n length:%d", i);
}