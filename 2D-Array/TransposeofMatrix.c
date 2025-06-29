#include <stdio.h>
int main(){
    int r;
    scanf("%d", &r);
    int c;
    scanf("%d", &c);
    int arr[r][c];
    printf("input: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\ntranspose matrix: \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}

//Transpose of matrix using an extra matrix

#include <stdio.h>
int main(){
    int r;
    scanf("%d", &r);
    int c;
    scanf("%d", &c);
    int arr[r][c];
    int brr[c][r];
    printf("input: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\ntranspose matrix: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            brr[j][i] = arr[i][j];
        }
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//transpore a sqaure amtrix without using an extra matrix --> and also use swapping (arr[i][j] -swap-> arr[j][i])

#include <stdio.h>
int main(){
    int r;
    scanf("%d", &r);
    
    int c;
    scanf("%d", &c);
    
    int arr[r][c];
    
    printf("input: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\ntranspose matrix: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
