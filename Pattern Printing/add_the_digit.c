#include <stdio.h>
int main(){
    int n, t, r=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(n>0){
        t = n%10;
        r = r+t;
        n = n/10;
        
    }
    
    printf("%d", r);
}