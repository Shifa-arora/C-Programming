#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int fact = 1, i;
    for(i=1; i<=n; i++){
        fact = fact*i;  // ***here the vakue of fact change by changing and multiplying with i.***/ 
    }
    printf("Factorial : %d", fact);
}


//***********OR********** */


#include <stdio.h>
int Factorial(int x){
    int Fact = 1;
    for(int i=2; i<=x; i++){
        Fact = Fact*i;
    }
    return Fact;
}
int main(){
    int a = Factorial(6);
    printf("%d",a);
    return 0;
}