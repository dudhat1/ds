#include <stdio.h>
#include <stdlib.h>
#define n 10
void printarray(int a[])
{
    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", a[i]);
}
void selection_sort(int arr[])
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                key = arr[i];
                arr[i] = arr[j];
                arr[j] = key;
            }
        }
        printarray(arr);
    }
}
int main()
{
    int a[20], min = 20, max = 101, val;
    for (int i = 0; i < n; i++)
        a[i] = (rand() % (max - min + 1) + min);
    printarray(a);
    selection_sort(a);

    // printarray(a);
    return 0;
}



