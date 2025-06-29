#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "College Wallah";
    char *ptr = str; // Pointer to the string
    printf("%s\n", ptr); // Print the string using pointer
    printf("%c\n", *ptr); // Print the first character of the string using pointer
    printf("%c\n", *(ptr + 1)); // Print the second character of the string using pointer arithmetic   
    printf("%p\n", str); // Print the address of the first character of the string
    printf("%p\n", &str); // Print the address of the string variable itself
    printf("%p\n", &str[0]); // Print the address of the first character of the string using array notation
}

//in normal initialization, we can modify individual characters but not the entire strings
//in pointer initialization, we can modify the entire string but not individual characters