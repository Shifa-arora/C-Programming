#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n%5==0 && n%3==0){
        printf("Divisible");
    }
    else {
        printf("Not Divisible");
    }
    return 0;
}


//**********Nested Loop*********** */


#include <stdio.h>
int main(){
    int a;
    printf("Enter first side: ");
    scanf("%d", &a);
    if (a%5==0){
        if(a%3==0){
            printf("Divisible");
        }
        else{
            printf("Not Divisible");
        }
    }
    else {
        printf("Not Divisible.");
    }
    return 0;
}