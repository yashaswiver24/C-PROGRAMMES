#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If number is 0, it has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // Handle negative numbers
        if (num < 0) {
            num = -num;
        }
        while (num > 0) {
            num = num / 10; // remove last digit
            count++;        // increase digit count
        }
    }

    printf("The number has %d digits.\n", count);

    return 0;
}





