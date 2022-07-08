#include <stdio.h>

int main()
{
    int array[100], position, c, n, value;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter  elements\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter the value to insert\n");
    scanf("%d", &value);

    for (c = n; c >= 0; c--)
        array[c] = array[c - 1];

    array[0] = value;
    printf("\n");

    for (c = 0; c <= n; c++)
        printf("%d\n", array[c]);

    return 0;
}