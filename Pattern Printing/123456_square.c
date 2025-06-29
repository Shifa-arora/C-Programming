#include <stdio.h>

int main(){
    int a, k=1;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            
            printf("%d ", k);
            k = k+1;
        }
        
        printf("\n");
    }
}

1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25