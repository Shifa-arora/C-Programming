#include <stdio.h>
int main(){
    int a=0, b=0;
    printf("Output of While Loop: \n");
    while(a<5){
        a++;
        printf("%d ", a);
    }
    
    printf("\nOutput of Do-While Loop: \n");
    do{
        b++;
        printf("%d ", b);
    }
    while(b<5);
}