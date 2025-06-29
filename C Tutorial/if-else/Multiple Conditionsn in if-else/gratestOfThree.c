#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the number: ");
    scanf("%d", &b);
    printf("Enter the number: ");
    scanf("%d", &c);
    if (a>b && a>c){
        printf("%d is greater", a);
    }
    else if (b>a && b>c){
        printf("%d is greater", b);
    }
    else {
        printf("%d is greater", c);
    }
    return 0;
}


/************nested if else************ */


#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the number: ");
    scanf("%d", &b);
    printf("Enter the number: ");
    scanf("%d", &c);
    if (a>b){
        if(a>c){
            printf("%d is greatest", a);
        }
        else{
            printf("%d is greatest", c);
        }
    }
    else {
        if(b>c)
            printf("%d is greatest", b);
        else
            printf("%d is greatest", c);
    }
    return 0;
}