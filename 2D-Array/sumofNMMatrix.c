#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    int c;
    printf("Enter the number of columns: ");    
    scanf("%d", &c);
    printf("Enter all the elements of the matrix:\n");
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum += arr[i][j];
        }
    }
    printf("The sum of the matrix is: %d\n", sum);
    return 0;

}

//find out max element and min in a matrix and index of that element

//find the max sum of row in a matrix and print the row

//find the max sum of column in a matrix and print the column

//find the max sum of diagonal in a matrix and print the diagonal