#include <stdio.h>
int main()
{
    int n;
    printf("enter the total number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element of array: ",i+1 );
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("largest number in array is %d\n", max);
    printf("smallest number in array is %d\n", min);
    return 0;
}