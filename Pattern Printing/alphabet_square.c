#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char ch = j+64;
            printf("%c ",ch);
        }
        printf("\n");
    }
    
    return 0;
}

A B C D E
A B C D E
A B C D E
A B C D E   
A B C D E