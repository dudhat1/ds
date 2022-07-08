#include <stdio.h>
void array(int d, int r, int c)
{
    int a[10][10][10], i, j, k, n = 0;
    for (i = 0; i < d; i++)
    {

        for (j = 0; j < r; j++)
        {
            for (k = 0; k < c; k++)
            {
                a[i][j][k] = ++n;
            }
        }
    }
    for (i = 0; i < d; i++)
    {
        for (j = 0; j < r; j++)
        {
            for (k = 0; k < c; k++)
            {
                printf("\t%d", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
int main()
{
    int d, r, c;
    printf("enter the Depth:");
    scanf("%d", &d);
    printf("enter the row:");
    scanf("%d", &r);
    printf("enter the colum:");
    scanf("%d", &c);
    array(d, r, c);
}