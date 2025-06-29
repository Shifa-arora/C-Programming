#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int r = 0;
    while(n>0){
        r = r*10;
        r = r+(n%10);
        n = n/10;
    }
    printf("The reversed number is: %d", r);
}



#include <stdio.h>
int main(){
    int n, t;
    printf("Enter the number: ");
    scanf("%d", &n);
    int r = 0;
    while(n>0){
        t = n%10;
        r = r*10+t;
        n = n/10;
        
    }
    printf("The reversed number is: %d", r);
}