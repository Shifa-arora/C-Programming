#include <stdio.h>
int main(){
    int Cp;
    printf("Enter cost Price: ");
    scanf("%d", &Cp);
    int Sp;
    printf("Enter selling Price: ");
    scanf("%d", &Sp);
    if (Sp>Cp){
    printf("Profit is %d", Sp-Cp);
    }
    if (Sp<Cp){
        printf("Loss is %d", Cp-Sp);
    }
    if (Sp==Cp){
        printf("No Loss No Profit");
    }
    return 0;
}