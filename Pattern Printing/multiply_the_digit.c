#include <stdio.h>
int main(){
    int n, t;
    printf("Enter the number: ");
    scanf("%d", &n);
    int r = 1;
    while(n>0){
        t = n%10;
        r = r*t;
        n = n/10;
        
    }
    
    printf("%d", r);
}