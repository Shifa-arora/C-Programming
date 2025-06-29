//1st method

#include <stdio.h>
#include <limits.h>
int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int brr[8];
    for(int i=0; i<8; i++){
        brr[i] = arr[7-i];
    }
    for(int i=0; i<8; i++){
        printf("%d ", brr[i]);
    }
    return 0;
}

//2nd method

#include <stdio.h>
#include <limits.h>
void reverse(int arr[]){
    int i=0;
    int j=7;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr [j];
        arr[j] = temp;
        i++;
        j--;
    }
    return 0;
}
int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse(arr);
    for(int i=0; i<8; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}


//3rd method--> to reverse fixed index range

#include <stdio.h>
void reverse(int arr[], int i, int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr [j];
        arr[j] = temp;
        i++;
        j--;
    }
    return ;
}
int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse(arr,0,4);
    for(int i=0; i<8; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}