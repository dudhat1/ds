#include <stdio.h>
void printArray(int a[])
{
    printf("\n.........Array.........\n\n");
    for (int i = 0; i < 10; i++)
        printf("\t%d", i);
    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("\t%d", a[i]);
}
void scan(int a[])
{
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("\n");
}
int binaryserach(int a[], int lb, int ub, int val)
{
    int mid;
    if (ub >= lb)
    {
        mid = (lb + ub) / 2;

        if (a[mid] == val)
        {
            return mid + 1;
        }
        else if (a[mid] < val)
        {
            return binaryserach(a, mid + 1, ub, val);
        }
        else
        {
            return binaryserach(a, lb, mid - 1, val);
        }
    }
    return -1;
}
int main()
{
    int a[10], lb = 0, ub = 10, val;
    scan(a);
    printArray(a);
    printf("\nEnter Value:");
    scanf("%d", &val);
    printf("Position:%d", binaryserach(a, lb, ub, val));
}