#include <stdio.h>
int main(){
    int a[4] = {1,2,3,4};   
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p\n", &a[2]);  
    printf("%p\n", &a[3]);

    char arr[5]  ={'a','b','c','d','e'};
    printf("%d\n",sizeof(a)); // 16 bytes (4 integers, 4 bytes each)
    printf("%d\n",sizeof(arr)); // 5 bytes (5 characters, 1 byte each)
    printf("%c\n",arr[2]); // 'c'
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr[1]);
    printf("%p\n", &arr[2]); 
    printf("%p\n", &arr[3]);

    return 0;
}

//ascaii value
// 'A' --> 65
// 'a' --> 97
// '0' --> 48
// '9' --> 57