#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
            printf("%d\n",i*19);
    }
    return 0;
}





#include <stdio.h>

int main(){
    int n, a=1, multiply;
    scanf("%d %d", &n, &a);
    printf("Enter the number: %d\n", n);
    printf("Enter the number you want to multiply till: %d\n", a);
    
    for(int j=1; j<=a; j++){
        multiply = n*j;
        printf("%d x %d = %d\n", n, j, multiply);
    }
    
    return 0;
}