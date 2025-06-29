#include <stdio.h>
int main(){
    int n, t;
    printf("Enter the number: ");
    scanf("%d", &n);
    int r = 0;
    while(n>0){
        n = n/10;
        r++;
        
    }
    printf("%d", r);
}