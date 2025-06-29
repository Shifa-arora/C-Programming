#include <stdio.h>
int main(){
    int n, i, j, isPrime;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=2; i<=n; i++){
        isPrime = 1;
        for(j = 2; j<i; j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a=0;
    for (int i=2; i<=n-1; i++){
        if (n%i==0){
            a=1;
            break;
        }
    }
    if(n==1){
        printf("Neither Prime Nor Composite.");
    }
    else if (a==0){
        printf("Number is Prime.");
    }
    else{
        printf("Numebr is Composite.");
    }
    return 0;
}