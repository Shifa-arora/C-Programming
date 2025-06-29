#include <stdio.h>
int main(){
    int a;
    printf("Enter the Year: ");
    scanf("%d", &a);
    if ((a%4==0 && a%100!=0) || (a%400==0)) {
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}

//output--> 1990
// Not a leap year
// 2000
// Leap year
// 1500
// Not a leap year