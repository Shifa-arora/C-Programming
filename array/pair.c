//double pair

#include <stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int totalPairs=0;
    int x=12;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(arr[i] + arr[j] == x){
                totalPairs++;
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("%d", totalPairs);
    return 0;
}


//triple pair

#include <stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int totalPairs=0;
    int x=12;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            for(int k=0; k<8; k++){
                if(arr[i] + arr[j] + arr[k]== x){
                    totalPairs++;
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("%d", totalPairs);
    return 0;
}