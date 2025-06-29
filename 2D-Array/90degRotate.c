#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);  // Input rows and columns

    int arr[r][c];
    printf("Input:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int temp[c][r]; // New array to hold rotated matrix

    // Rotate: Copy elements to new positions
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            temp[j][r - 1 - i] = arr[i][j];
        }
    }

    // Print rotated matrix
    printf("\nRotated Matrix (90 degrees clockwise):\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", temp[i][j]);
        }
        printf("\n");
    }

    return 0;
}
