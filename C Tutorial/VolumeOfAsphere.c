#include<stdio.h>
int main() {
    int r = 5;
    int v = 4 * 3.14 * r * r * r / 3;
    printf("The volume is: %d", v);    
    return 0;
}

//output-->523

#include<stdio.h>
int main() {
    int r = 5;
    float v = 4 * 3.14 * r * r * r / 3;
    printf("The volume is: %f", v);    
    return 0;
}

//output-->523.333313