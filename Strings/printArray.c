#include <stdio.h>
int main(){
    char arr[11] = {'H','e','l','l','o',' ','W','o','r','l','d'};
    printf("%s\n", arr); // Hello World
    printf("%s\n", arr+6); // World
    printf("%s\n", arr+5); //  Hello World
    printf("%s\n", arr+1); // ello World
    for(int i=0; i<11; i++){
        printf("%c", arr[i]); // Hello World
    }
    printf("\n");
}