#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter base: ");
    scanf("%d",&a);
    printf("Enter power: ");
    scanf("%d",&b);
    int power=1;
    for (int i=1;i<=b;i++){
        power = power*a;
    }
    printf("%d raised to the power %d is %d",a,b,power);
    return 0;
}


//another method

#include <stdio.h>
int power(int a, int b){
    int result = 1;
    for(int i=1; i<=b; i++){
        result = result*a;
    }
    return result;
}
int main(){
    int a, b, n;
    printf("Enter the base: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    printf("The base %d of power %d is %d", a, b, power(a, b));
    return 0;
}