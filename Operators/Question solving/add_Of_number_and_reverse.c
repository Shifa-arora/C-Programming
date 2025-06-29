#include <stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int reverse=0, sum, temp, digit;
    temp = number;
    while(temp!=0){
        digit = temp%10; // last digit
        reverse = reverse*10+digit; // add last digit in reverse first
        temp = temp/10; //to remove the last digit
    }
    sum = number + reverse;
    printf("Original number: %d\n", number);
    printf("Reverse of number: %d\n", reverse);
    printf("Sum of both: %d\n", sum);
    return 0;
}

//*******************or*************** */

#include <stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int reverse=0, sum, temp, digit;
    temp = number;
    while(temp>0){
        digit = temp%10; // last digit
        reverse = reverse*10+digit; // add last digit in reverse first
        temp = temp/10; //to remove the last digit
    }
    sum = number + reverse;
    printf("Original number: %d\n", number);
    printf("Reverse of number: %d\n", reverse);
    printf("Sum of both: %d\n", sum);
    return 0;
}