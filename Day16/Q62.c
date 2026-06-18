#include <stdio.h>
int main() {
    int arr[]={1, 2, 3, 2,2,4,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxFeq = 0,element;
    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxFeq) {
            maxFeq = count;
            element = arr[i];
        }
    }
    printf("element: %d, frequency: %d", element, maxFeq);
return 0;
}
