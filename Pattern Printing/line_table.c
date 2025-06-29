#include <stdio.h>

int main(){
    int a, k=1,o;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            
            o = j*k;
        
            printf("%d ", o);
        }
        k++;
        printf("\n");
    }
}

1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25