#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter %d in array: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int temp;

    for (int left = 0, right = n - 1; left < right; left++, right--)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }

    printf("reversed array is: ");
    printf("{ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if(i != n-1)
        printf(", ");
    }
    printf(" }");

    return 0;
}