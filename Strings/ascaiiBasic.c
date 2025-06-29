#include <stdio.h>
int main(){
    char ch = 'A';
    int x = (int)ch; // Explicitly cast char to int
    printf("%d\n", ch); // 65
    //or
    printf("%d\n", x); // 65

    printf("%c\n", ch); // 'A'
}