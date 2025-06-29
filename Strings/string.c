#include <Stdio.h>
int main(){
    char str[20] = "CollegeWallah"; // String declaration and initialization
    char str2[20]; // String declaration without initialization
    int i = 0;
    while(str[i] != '\0'){ // Loop until null character is found
        str2[i] = str[i]; // Copy each character to str2
        i++; // Increment index
    }
    str2[i] = '\0'; // Add null character at the end of str2
    printf("Original String: %s\n", str); // Print original string
    printf("Copied String: %s\n", str2); // Print copied string
    return 0; // Return success
}


#include <stdio.h>
int main() {
    char str[20] = "Hello World"; // String declaration and initialization
    str[1] = 'v'; // Change the second character to 'v'
    int i = 0;
    while (str[i] != '\0') { // Loop until null character is found
        printf("%c", str[i]); // Print each character
        i++; // Increment index
    }
    str2[i] = '\0'; // Add null character at the end of str2
    printf("Original String: %s\n", str); // Print original string
    printf("Copied String: %s\n", str2); // Print copied string
    return 0; // Return success
}