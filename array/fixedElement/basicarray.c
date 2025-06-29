#include <stdio.h>

int main()
{
    int arr[5] = {1, 5, 8, 21, 65};
    printf("%d\n", arr[1]);
    arr[4] = 500;
    arr[1] = 65;
    // printf("%d\n", arr[1]); // gives = 65 (updated value)
    // printf("%d\n", arr[0]); // gives  = 0 
    // printf("%d\n", arr[5]); // give a random number because positions not exists
    // printf("%d\n", arr[-1]); // give a random number because positions not exists
    // printf("%d\n", arr); // give a random number because positions not exists
    for(int i=0; i<=5; i++){
        if(i % 2 == 0){
            printf("%d\n", arr[i]);
        }
        else{
            printf("Black\n");
        }
    }
    return 0;
}


// #include <stdio.h>
// int main(){
//     // float value
    
//     // float arr[3] = {52.2, 28.8, 36.9};
//     // printf("%.2f\n", arr[1]);
    
//     //char value
    
//     // char arr[4] = {'a', 'n', 'y', '%'};
//     // for(int i=0; i<=4; i++){
//     //     printf("%c\n", arr[i]);
//     // }
//     //--> to print complete array by short method(for loop)
    
//     // printf("%c", arr[3]);
// }