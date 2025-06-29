#include <stdio.h>
int main() {
    int[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int maxCount=0;
    int maxRow=0;
    int maxCol=0;  
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j] == 1){
                maxCount++;
                maxRow = i;
                maxCol = j;
            }
        }
    }
    printf("The maximum number of 1's is %d in row %d and column %d\n", maxCount, maxRow, maxCol);

    return 0;
}



//another method
#include <stdio.h>
int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int maxCount=0;
    for(int i=0; i<3; i++){
        int count=0;
        int maxIdx = -1;
        for(int j=0; j<4; j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(maxCount < count){
            maxCount = count;
            maxIdx = i;
        }
        printf("\n");
        
    }
    printf("%d", maxCount);
    printf("%d",maxIdx);

    return 0;
}

//**OR** */

#include <stdio.h>
int main() {
    int arr[3][4] = {{2, 1, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int maxCount=0;
    int maxIdx = -1;
    int idx = -1;
    for(int i=0; i<3; i++){
        int count=0;
        
        for(int j=0; j<4; j++){
            if(arr[i][j] == 1){
                count++;
                idx = j;
            }
        }
        if(maxCount < count){
            maxCount = count;
            maxIdx = i;
            
        }
        printf("\n");
        
    }
    printf("%d\n", maxCount);
    printf("%d\n", maxIdx);
    printf("%d", idx);

    return 0;
}