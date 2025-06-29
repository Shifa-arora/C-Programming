#include <stdio.h>

int main() {
    int students;
    printf("Enter number of students: ");
    scanf("%d", &students);
    
    int subject = 3;
    int store[subject][students]; // Correct array declaration

    // Input loop
    for (int i = 0; i < students; i++) {
        printf("Enter marks for student %d (3 subjects): ", i + 1);
        for (int j = 0; j < subject; j++) {  // Fixing the index range
            scanf("%d", &store[j][i]);
        }
    }

    // Output loop
    printf("\nMarks entered:\n");
    for (int i = 0; i < students; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < subject; j++) { // Fixing the index range
            printf("%d ", store[j][i]);
        }
        printf("\n");
    }

    return 0;
}
