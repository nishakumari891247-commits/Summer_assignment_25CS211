#include<stdio.h>
void moveZeroes(int arr[], int n) {
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos++] = arr[i];
        }
    }
    while (pos < n) {
        arr[pos++] = 0;
    }
}

int main(){
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeroes(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}