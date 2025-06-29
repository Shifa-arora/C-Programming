#include <stdio.h>
int main(){
    int arr[7] = {12, 21, 54, 68, 58, 71, 21};
    int x = 21;
    int count = 0;
    for(int i=0; i<=6; i++){
        if(arr[i] == x){
            count++;
            printf("%d is prsent in the array at index %d, %d times\n", x, i, count);
            
        }
    }
    return 0;
}

//using bool
#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[7] = {12, 21, 54, 68, 58, 71, 21};
    int x = 21;
    bool flag = false;
    for(int i=0; i<=6; i++){
        if(arr[i] == x){
            flag = true;
            break;
        }
    }
    if (flag == false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("%d is absent in the array",x);
    }
    return 0;
}

//to find position of an element in an array by bool
#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[7] = {12, 21, 54, 68, 58, 71, 21};
    int x = 21;
    int idx = -1;
    bool flag = false;
    for(int i=0; i<=6; i++){
        if(arr[i] == x){
            flag = true;
            idx = i;
            // break;
            if (flag == false){
                printf("%d is not present in the array.", x);
            }
            else{
                printf("%d is present in the array at index %d\n", x, idx);
            }
        }
    }
    // if (flag == false){
    //     printf("%d is not present in the array.", x);
    // }
    // else{
    //     printf("%d is present in the array at index %d", x, idx);
    // }
    return 0;
}