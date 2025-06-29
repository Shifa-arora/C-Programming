#include <stdio.h>
int main(){
    int n, n1;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("Enter the n1: ");
    scanf("%d", &n1);
    for(int i=n; i<=n1; i++){
            printf("%d\n",i*n);
    }
    return 0;
}