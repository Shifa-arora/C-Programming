#include <stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a%2==0){
        printf("Even number");
    }
    else{
        printf("Odd Number");
    }
    return 0;
}
//output--> 5
// Odd Number