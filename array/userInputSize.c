#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("enter ");
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("\n");
        printf("%d ", arr[i]);
    }
    return 0;
}