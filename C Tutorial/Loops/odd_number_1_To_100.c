#include <stdio.h>
int main(){
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
        else;
    }
    return 0;
}

/***********or*********** */


#include <stdio.h>
int main(){
    int n;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i=i+2){
        printf("%d\n",i);
    }
    return 0;
}