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
    int n=8;
    int k=50;
    //step first-->
    k = k%n; //taki loop baar baar na chle
    //second step --> puri array ko reverse krna
    reverse(arr, 0, n-1);
    //third step --> k elemnts ko reverse krna--> by k%n remainder kr ke utne elements ko reverse kr diya
    reverse(arr, 0, k-1);
    //fourth step --> jha tkk reverse hua uske aage se ending tkk ko reverse kr do
    reverse(arr, k, n-1);
    for(int i=0; i<8; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}