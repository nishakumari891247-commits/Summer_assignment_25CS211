#include <stdio.h>
int findmissing(int arr[], int size,int n) {
    int expectedsum = n * (n + 1) / 2;
    int actualsum = 0;
    for (int i = 0; i < size; i++) {
        actualsum += arr[i];
    }
    return expectedsum - actualsum;
}
int main() {
    int arr[]= {1, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    printf("the missing number is %d", findmissing(arr, size,n));
    return 0;
}
