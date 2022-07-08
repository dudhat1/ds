#include <stdio.h>
#include <stdlib.h>
#define n 10
int totalElement;
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
void quicksort(int number[25], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        printf("\n inside quick  : ");
        for (int i = 0; i < totalElement; i++)
            printf(" %d", number[i]);
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quicksort(number, first, j - 1);
        quicksort(number, j + 1, last);
    }
}
void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}
void mergesort(int a[], int i, int j);
void merge(int a[], int i1, int j1, int i2, int j2);
void mergesort(int a[], int i, int j)
{
    int mid;
    if (i < j)
    {
        mid = (i + j) / 2;
        mergesort(a, i, mid);
        mergesort(a, mid + 1, j);
        merge(a, i, mid, mid + 1, j);
    }
}
void merge(int a[], int i1, int j1, int i2, int j2)
{

    int temp[50];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;
    // printf("\n %d %d %d %d ", i, j, a[i], a[j]);
    // printf("\n %d %d %d %d ", i1, j1, i2, j2);

    while (i <= j1 && j <= j2)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= j1)
        temp[k++] = a[i++];
    while (j <= j2)
        temp[k++] = a[j++];

    for (i = i1, j = 0; i <= j2; i++, j++)
        a[i] = temp[j];
}
int main()
{
    int a[20], min = 20, max = 101, val, b, choice, lb, ub, s[10], i, number[25], q, r;
    for (int i = 0; i < n; i++)
        a[i] = (rand() % (max - min + 1) + min);
    do
    {
        printf("\n1. searching\n2.printarray\n3.bubble_sort\n4.selection_sort\n5.binaryserach\n6.quicksort\n7.insertionSort\n8.mergesort\n9.Exit");
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
        case 6:
            printf("How many elements ?: ");
            scanf("%d", &totalElement);
            printf("Enter %d elements: ", totalElement);
            for (i = 0; i < totalElement; i++)
                scanf("%d", &number[i]);
            // print(number);
            printf("\nOrder of Sorted elements: ");
            for (i = 0; i < totalElement; i++)
                printf(" %d", number[i]);
            // print(number);
            quicksort(number, 0, totalElement - 1);
        case 7:
            printf("How many elements are u going to enter ");
            scanf("%d", &q);
            printf("\nEnter array elements:");
            for (i = 0; i < q; i++)
                scanf("%d", &a[i]);
            // mergesort(a, 0, n - 1);
            insertionSort(a, q);
            printf("\nSorted array is :");
            for (i = 0; i < q; i++)
                printf("%d ", a[i]);
        case 8:
            printf("How many elements are u going to enter ");
            scanf("%d", &r);
            printf("Enter array elements:");
            for (i = 0; i < r; i++)
                scanf("%d", &a[i]);
            mergesort(a, 0, r - 1);
            printf("\nSorted array is :");
            for (i = 0; i < r; i++)
                printf("%d ", a[i]);

        case 9:
            break;

        default:
            printf("invalid input");
            break;
        }
    } while (choice != 9);
    return 0;
}