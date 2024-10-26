#include <stdio.h>
int swap(int *a, int *b);
int sorted(int arr[], int n);
int main()
{
    int n = 10;
    int arr[10];
    int i, j;
    int s;
    for (i = 0; i < n; i++)
    {
        printf("Enter your element");
        scanf("%d", &arr[i]);
    }
    if (sorted(arr, n))
    {
        printf("The array is already sorted");
    }
    else
    {
    for (i = 0; i < n - 1; i++)
    {
        s = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                s = 1;
                // printf("%d %d\n", arr[j], arr[j + 1]);
            }
        }
        if (s == 0)
        {
            break;
        }
    }
    
    printf("The sorted array is\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    }
    return 0;
}

int swap(int *a, int *b)
{
    int z;

    z = *a;
    *a = *b;
    *b = z;
}
int sorted(int arr[], int n)
{
    int i;
    for(i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            return 0;
        }
    }
    return 1;
}