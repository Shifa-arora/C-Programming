#include <stdio.h>
int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows=3, cols=3, total_sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            total_sum += arr[i][j];
        }
    }
    printf("Sum of all elements in the 2D array: %d\n", total_sum);
}