#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int isDuplicate;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        isDuplicate = 0;

        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}