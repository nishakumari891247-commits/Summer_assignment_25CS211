#include<stdio.h>
void reverse(int arr[], int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main() {
    int n, i;
    printf("enter the size of array");
    scanf("%d", &n);
    int arr[100];
    printf("enter the elements");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    printf("reversed array is");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
