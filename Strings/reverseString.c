include <stdio.h>
#include <string.h> 
int main(){
    // char str[]; --> thi sis not valid because str is not declared with size
    char str[40];
    scanf("%s", str); 
    scanf("%[^\n]", str); 
    gets(str); 
    printf("%s\n", str);
    int size = 0;
    int k=0;
    while(str[k] != '\0'){
        size++;
        k++;
    }
    printf("%d\n", size); // Print the size of the string
    for(int i=0, j=size-1;i<=j;i++, j--){
        char temp = str[i]; // Store the character at index i in a temporary variable
        str[i] = str[j]; // Swap the characters at index i and j
        str[j] = temp; // Assign the value of temp to str[j]
    }
    printf("%s\n", str); // Print the reversed string
}