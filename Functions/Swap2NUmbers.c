// without using third variable

#include <stdio.h>
int swap(int x, int y){
    x = x+y;
    y = x-y;
    x = x-y;
    printf("a: %d\n", x);
    printf("b: %d", y);
    return x,y;
}
int main(){
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    swap(a,b);
    return 0;
}