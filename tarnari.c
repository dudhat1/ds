#include <stdio.h>
int main()
{
    int a = 20, b = 10, c = 30;
    printf("\n %d", a > b ? a : b);
    printf("\n %d", a > b && a > c ? a : b > c ? b
                                               : c);
    return 0;
}