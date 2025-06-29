#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int fact = 1, i;
    for(i=1; i<=n; i++){
        fact = fact*i;  // ***here the vakue of fact change by changing and multiplying with i.***/ 
        printf("Factorial %d: %d\n", i, fact);
        
    }
    
}