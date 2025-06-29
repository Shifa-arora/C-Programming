#include <stdio.h>
#include <string.h> // Include string.h for string functions
int main(){
    char str[] = "college wallah"; 
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
    printf("\n"); 

    //or

    printf("%s\n", str);

    //or

    puts(str); // prints the string and adds a newline at the end
    // --> puts only used ofr string can not be used for any other data type to print
}

#include <stdio.h>
#include <string.h> 
int main(){
    char str[40];
    scanf("%s", str); // Read a string from user input
    //or
    scanf("%[^\n]", str); // Read a string until newline character is encountered
    //only the first word will be read, spaces will terminate the input
    gets(str); // Read a string from user input including spaces
    printf("%s\n", str); // Print the string
}