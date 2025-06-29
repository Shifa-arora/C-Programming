#include <stdio.h>
int main(){
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    if (a<0){
        a = a*(-1);
    printf("The Absolute value is: %d",a);
    }
    else{
        printf("The Absolute value is: %d", a);
    }
    return 0;
}