#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){\
        char ch = j+64;
            printf("%c ",ch);
        }
        printf("\n");
    }
    
    return 0;
}

A B C D E
A B C D
A B C
A B
A