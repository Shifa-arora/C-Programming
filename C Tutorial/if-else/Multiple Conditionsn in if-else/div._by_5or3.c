#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n%5==0 || n%3==0){
        printf("Divisible");
    }
    else {
        printf("Not Divisible");
    }
    return 0;
}


//*********Nested loop********* */
//but not divisible by 15


#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a%5==0 || a%3==0){
        if(a%15!=0){
            printf("divisible by 5 and 3 but not by 15");
        }
        else{
            printf("divisible by 5 , 3 and 15");
        }
    }
    else {
        printf("Not Divisible by 3 and 5");
    }
    return 0;
}