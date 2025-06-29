#include <stdio.h>
int main(){
    int x, y;
    printf("Enter the coordinates: ");
    scanf("%d %d",&x, &y);
    if (x==0 && y==0){
        printf("lies at origin");
    }
    else if (x==0 && y!=0){
        printf("Lies on y-axis");
    }
    else if(y==0 && x!=0){
        printf("Lies on y-axis");
    }
    else{
        printf("wrong, please refresh and rewrite the coordinates.");
    }
    return 0;
}