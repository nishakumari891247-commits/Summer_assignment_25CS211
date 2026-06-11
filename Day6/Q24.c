#include <stdio.h>
int main()
{
    int x, n;
    long long result = 1;
    printf("enter base (x) and exponent (n): ");
    scanf("%d %d", &x, &n);
    for(int i = 0; i < n; i++){
        result *= x;
    }
    printf("result: %lld", result);
    return 0;
}