#include <stdio.h>

int main(){
    int a, k=1,o;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            k = a-j+1;
            printf("%d ", k);
        }
        printf("\n");
    }
}

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1