#include <stdio.h>
int main(){
    int n;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    int a=4;
    for(int i=1; i<=n; i++){
        printf("%d\n",a);
        a = a+3;
    }
    return 0;
}