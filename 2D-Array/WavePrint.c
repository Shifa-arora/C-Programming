#include <stdio.h>
int main(){
    int m;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    int n;
    printf("Enter the number of columns: ");  
    scanf("%d", &n);
    int arr[m][n];  
    printf("Enter the elements of the array:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    // Wave print--> |  |->|
    //               |  |  |
    //               |->|  |
    printf("Wave print of the array:\n");
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                printf("%d ", arr[j][i]);
            }
        } else {
            for(int j=n-1; j>=0; j--){
                printf("%d ", arr[j][i]);
            }
        }
        printf("\n");
    }
    // Wave print
//               |->|->|
//               |<-|<-|
//               |->|->|
    printf("Wave print of the array:\n");
    for(int j=0; j<m; j++){
        if(j%2==0){
            for(int i=0; i<m; i++){
                printf("%d ", arr[j][i]);
            }
        } else {
            for(int i=m-1; i>=0; i--){
                printf("%d ", arr[j][i]);
            }
        }
    }
}