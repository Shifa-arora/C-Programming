#include <stdio.h>
int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact * i;
        
    }
    return fact;
}
int Combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        for (int space = 0; space < n - i; space++) {
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            int iCj = Combination(i,j);
            printf(" %d", iCj);
        }
        printf("\n");
    }
    return 0;
}