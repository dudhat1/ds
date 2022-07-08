#include <stdio.h>
#include <stdlib.h>
#define n 10
void searching(int b)
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80}, i;
    for (i = 0; i < b; ++i)
    {
        if (a[i] == b)
            break;
    }
    if (i < b)
    {
        printf("element found at %d", i);
    }
    else
    {
        printf("element not found");
    }
}
void printarray(int a[])
{
    printf("\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t", a[i]);
}
void bubble_sort(int arr[])
{
    int i, j, key;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                key = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = key;
            }
        }
        printarray(arr);
    }
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
int binaryserach(int s[], int lb, int ub, int val)
{
    int mid;
    if (ub >= lb)
    {
        mid = (lb + ub) / 2;

        if (s[mid] == val)
        {
            return mid + 1;
        }
        else if (s[mid] < val)
        {
            return binaryserach(s, mid + 1, ub, val);
        }
        else
        {
            return binaryserach(s, lb, mid - 1, val);
        }
    }
    return -1;
}
int main()
{
    int a[20], min = 20, max = 101, val, b, choice, lb, ub, s[10];
    for (int i = 0; i < n; i++)
        a[i] = (rand() % (max - min + 1) + min);
    do
    {
        printf("\n1. searching\n2.printarray\n3.bubble_sort\n4.selection_sort\n5.binaryserach\n9.Exit");
        printf("\nEnter Your Choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("10, 20, 30, 40, 50, 60, 70, 80,90");
            printf("\nenter the element");
            scanf("%d", &b);
            searching(b);
            break;
        case 2:
            printarray(a);
            break;
        case 3:
            bubble_sort(a);
            break;
        case 4:
            selection_sort(a);
            break;
        case 5:
            for (int i = 0; i < 10; i++)
                scanf("%d", &s[i]);
            printf("\n");
            for (int i = 0; i < 10; i++)
                printf("\t%d", s[i]);
            printf("\nEnter Value:");
            scanf("%d", &val);
            printf("Position:%d", binaryserach(s, 0, 10, val));
            break;
        case 9:
            break;

        default:
            printf("invalid input");
            break;
        }
    } while (choice != 9);
    return 0;
}