#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of students in test: ");
    scanf("%d",&n);
    int marks[n];
    for(int i=0; i<n; i++){
        printf("Enter the %d number: \n", i+1);
        scanf("%d", &marks[i]);
    }
    for(int i=0; i<n; i++){
        if(marks[i]<35){
            printf("%d\n",i);
        }
    }
    return 0;
}