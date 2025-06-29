#include <stdio.h>

int main(){
    int a,o,power=1;
    scanf("%d %d", &a, &o);
    for(int i =1; i<=o; i++){
        power = power * a;
        
        
    }
    printf("%d ", power);
}