#include <stdio.h>

int main() {
    int marks;

    // Ask user for input
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    // Check and assign grade using else-if ladder
    if (marks >= 90 && marks <= 100) {
        printf("Grade A\n");
    } else if (marks >= 75 && marks <= 89) {
        printf("Grade B\n");
    } else if (marks >= 50 && marks <= 74) {
        printf("Grade C\n");
    } else if (marks >= 0 && marks < 50) {
        printf("Grade F\n");
    } else {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    }

    return 0;
}