#include <stdio.h>

void spiralPrint(int rows, int cols, int matrix[rows][cols]) {
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Top row
        for (int i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);
        top++;

        // Right column
        for (int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;

        // Bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);
            bottom--;
        }

        // Left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }
}

// 1  2  3
// 4  5  6
// 7  8  9

// 1 → 2 → 3
//         ↓
// 4 → 5 . 6
// ↑       ↓
// 7 ← 8 ← 9

// output--> 1 2 3 6 9 8 7 4 5

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];  // Variable-Length Array (VLA)

    printf("Enter matrix elements (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nSpiral Order: ");
    spiralPrint(rows, cols, matrix);
    printf("\n");

    return 0;
}
