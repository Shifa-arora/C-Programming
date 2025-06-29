#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance d1, d2, sum;

    // Input distances
    printf("Enter first distance (feet and inches): ");
    scanf("%d %d", &d1.feet, &d1.inch);

    printf("Enter second distance (feet and inches): ");
    scanf("%d %d", &d2.feet, &d2.inch);

    // Add inches and convert to feet if >= 12
    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet + sum.inch / 12;
    sum.inch %= 12;

    // Output result
    printf("Total distance = %d feet %d inches\n", sum.feet, sum.inch);

    return 0;
}
