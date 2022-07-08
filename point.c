#include <stdio.h>
int main()
{
    int a = 10, *p, **doublepointer;
    printf("\n value of a %d", a);
    printf("\n address of a %u", &a);

    p = &a;

    printf("\n\n address of a using p %u", p);
    printf("\n address of p %u", &p);
    printf("\n value of a using p %d", *p);

    doublepointer = &p;

    printf("\n address of p using doublepointe %u", doublepointer);
    printf("\n address of a using doublepointe %u", *doublepointer);
    printf("\n address of doublepoint %u", &doublepointer);
    printf("\n value of a using doublepointer %d", **doublepointer);
}