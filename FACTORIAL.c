#include <stdio.h>

int main() {
    int n, i = 1;
    long long factorial = 1;  // use long long for large results

    printf("Enter a number: ");
    scanf("%d", &n);

    // factorial of negative numbers doesn't exist
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= n) {
            factorial = factorial * i;
            i++;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}
