#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    // a= number of length star
    // b= number of breadth star
    for(int i=1; i<=b; i++){
        for(int i=1; i<=a; i++){
        printf("* ");
        
        }
        printf("\n");
    }
    return 0;

Output:  * * * * * 
         * * * * * 
         * * * * * 
         * * * * * 
         * * * * *