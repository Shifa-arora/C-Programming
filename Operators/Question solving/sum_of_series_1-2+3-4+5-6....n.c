#include <stdio.h>
int main(){
    int n, sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum = -n/2;
        }
        else{
            sum = (-n/2)+n;
        }
    }
    printf("%d ", sum);
    return 0;
}

//**************or*************/


#include <stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    int sum = 0;
    for (int i =1; i<=number; i++){
        if(i%2!=0) sum = sum+i;
        else sum = sum-i;
    }
    printf("The sum is: %d", sum);
    return 0;
    // 1-2+3-4+5-6+7 = 4
}


/**********or************* */


#include <stdio.h>
int main(){
    int number;
    int evenSum, oddSum;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number%2==0){
        evenSum = -number/2;
        printf("The sum is: %d",evenSum);
    }
    else{
        oddSum = -number/2 + number;
        printf("the sum is: %d", oddSum); 
    }
    return 0;
}