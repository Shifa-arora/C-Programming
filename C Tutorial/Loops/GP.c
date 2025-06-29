#include <stdio.h>
int main(){
    int n;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    int a=3;
    for(int i=1; i<=n; i++){
        printf("%d ",a);
        a = a*4;
    }
    return 0;
}


#include <stdio.h>
int main(){
    // int n;
    // printf("Enter the numbers: ");
    // scanf("%d",&n);
    int a=100;
    for(int i=1; a>0; i++){
        printf("%d ",a);
        a = a-3;
    }
    return 0;
}


/*******wrong******** */


#include <stdio.h>
int main(){
    // int n;
    // printf("Enter the numbers: ");
    // scanf("%d",&n);
    float a=100;
    for(float i=1; a>0; i++){
        printf("%f ",a);
        a = a-(50/i);
    }
    return 0;
}

