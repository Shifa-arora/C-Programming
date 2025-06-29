#include <stdio.h>
int main(){
    int arr[2][2];
    arr[0][0] = 1;
    arr[0][1] = 2;  
    arr[1][0] = 3;
    arr[1][1] = 4;

    // or

    int arr2[2][2] = {{1, 2}, {3, 4}};

    //printing
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //printing arr2
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    
    

    return 0;
}