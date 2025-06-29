#include <stdio.h>
#include <string.h>
int main(){
    char s1[] = "Physics Wallah";

    // char* s2 = s1;  // s2 is shallow copy
    // s1[0] = 'C'; // Modifying the first character of s1
    // printf("%s\n", s1); // Print the modified string s1
    // printf("%s\n", s2); // Print the string pointed to by s2 (which is still "Physics Wallah")
    // // s2[0] = 'C'; // Uncommenting this line would cause a segmentation fault because s2 points to a string literal
    // 2nd line  ka koi kaam nhi h because shallow mein nhi change kr sakte

    char s2[] = "Physics Wallah"; // s2 is a deep copy
    s1[0] = 'C'; // Modifying the first character of s1
    printf("%s\n", s1); // Print the modified string s1
    printf("%s\n", s2); // Print the string s2 (which is still "Physics Wallah")
}