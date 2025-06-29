#include<stdio.h>
int main() {
    int r = 5;
    float v = 3.14 * r * r ;
    printf("The Area is: %f", v);    
    return 0;
}

//output-->78.500000


#include <stdio.h>
int main(){
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    float pi = 3.1415;
    float area = pi * radius * radius;
    printf("The Area of Circle is: %f",area);
    return 0;
}

// output--> 314.150024