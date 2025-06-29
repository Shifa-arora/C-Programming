// #include <stdio.h>
// #include <string.h>
// int main(){
//     char s1[] = "Physics Wallah";
//     char s2[];
//     str(s2, s1); // Copying the string s1 to s2 using strcpy function
//     s2[0] = 'C'; // Modifying the first character of s2
//     printf("%s\n", s1); // Print the string s1 (which is still "Physics Wallah")
//     printf("%s\n", s2); // Print the modified string s2 (which is now "Chysics Wallah")
// }

//insert character in string

#include <stdio.h>
#include <string.h>
int main(){
    char str[20] = "College";
    printf("%s\n", str); // Print the original string
    for(int i=6; i>=2; i--){
        str[i+1] = str[i]; // Shift characters to the right
    }
    str[2] = 'W'; // Insert 'W' at the beginning
    printf("%s\n", str); // Print the modified string
    return 0;
}