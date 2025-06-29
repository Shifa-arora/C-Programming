#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            // Print '*' only for borders
            if (i == 1 || i == rows || j == 1 || j == cols) {
                printf("* ");
            } else {
                printf("  "); // Print spaces inside
            }
        }
        printf("\n"); // New line after each row
    }
    
    return 0;
}