#include <stdio.h>
int main(){
    int l;
    printf("Enter Length: ");
    scanf("%d", &l);
    int b;
    printf("Enter breadth: ");
    scanf("%d", &b);
    int a = l*b;
    int p = 2 * (l+b);
    if (a>p){
        printf("Area is greater");
    }
    else{
        printf("Parameter is greater");
    }
    return 0;
}