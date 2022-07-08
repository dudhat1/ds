#include <stdio.h>
int main()
{
    void dosum();
    dosum();
}
void dosum()
{
    int a, b, c, sum, total;
    printf("\n enter the montle envestement");
    scanf("%d", &a);
    printf("\n enter the rate");
    scanf("%d", &b);
    printf("enter of the year");
    scanf("%d", &c);
    sum = a * b / 100 * (c);
    printf("%d", sum);
    total = sum * 0.1;
    printf("%d", total + a);
}