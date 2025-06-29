#include <stdio.h>
int main(){
    int n, b;
    scanf("%d %d", &n, &b);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=b; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}

1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5