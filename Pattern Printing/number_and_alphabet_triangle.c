#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%2==0){
                char ch = j+64;
                printf("%c ", ch);
            }
            else{
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

1
A B 
1 2 3
A B C D
1 2 3 4 5