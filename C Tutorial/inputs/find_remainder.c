#include <stdio.h>
int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int q;
    q = a/b;
    printf("quoitent is: %d", r);
}
// output-->39
//7
//5


#include <stdio.h>
int main(){
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    int q= a/b;
    int r = a-b*q;   //or r = a%b
    printf("remainder when %d is divided by %d: %d", a,b,r);
    return 0;
}
//output--> 9
//2
//1