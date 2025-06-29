#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            char ch = j+64;
            printf("%c ",ch);
        }
        printf("\n");
    }
    
    return 0;
}

A
A B
A B C
A B C D
A B C D E