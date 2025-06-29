#include <stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int sum = 0;
    for (int i =1; i<=number; i++){
        sum = sum+i;
    }
    printf("The sum is: %d", sum);
    return 0;
}