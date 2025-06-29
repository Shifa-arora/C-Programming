// #include <stdio.h>
// int main(){
//     int arr[7] = {-25, 36, -8, 56, 65, 1, 0};
//     int max = arr[0];
//     for (int i=0; i<7; i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }
//     printf("%d", max);
// }



// //for minimum value

// #include <stdio.h>
// int main(){
//     int arr[7] = {-25, 36, -8, 56, 65, 1, 0};
//     int min = arr[0];
//     for (int i=0; i<7; i++){
//         if(min>arr[i]){
//             min = arr[i];
//         }
//     }
//     printf("%d", min);
// }

// to find max and min in array
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
}