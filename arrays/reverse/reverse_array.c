#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;

    int left = 0;
    int right = n - 1;
    int temp;

    while(left < right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}