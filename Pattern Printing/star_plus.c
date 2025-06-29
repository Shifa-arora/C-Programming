
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            
            if(n%2!=0){
                
                int a = (n+1)/2;
                if(j==a || i==a){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
                
            }
            else{
                printf("this is not possible for even number\n");
            }
        }
        printf("\n");
    }

    
}