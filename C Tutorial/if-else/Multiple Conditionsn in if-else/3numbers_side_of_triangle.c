#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side: ");
    scanf("%d", &a);
    printf("Enter second side: ");
    scanf("%d", &b);
    printf("Enter third side: ");
    scanf("%d", &c);
    if ((a+b)>c || (a+c)>b || (c+b)>a){
        printf("yes, this is a triangle");
    }
    else {
        printf("no. this is not a triangle");
    }
    return 0;
}