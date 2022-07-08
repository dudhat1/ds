#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
        a[i] = rand() % (99 - 11 + 1) + 11;
    for (i = 0; i < 10; i++)
        printf("%d\t", a[i]);
}