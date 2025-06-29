#include <stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    //*x = 5; //a=5
    *x = *y;
    *y = temp;
    printf("a: %d\n", *x);
    printf("b: %d", *y);
}
int main(){
    int a=2, b=9;
    swap(&a,&b);
    return 0;
}

//int*--> int ka address store krta h
//int**--> int* ka address store krta h