#include <stdio.h>
int main(){
    char arr[] = {'H','e','l','l','o',' ','W','o','r','l','d'};
    char ch = 'ab'; // 'ab' is not a valid character, it will be treated as 'a' and 'b' separately
    printf("%c\n", ch);
    char ch = '\0'; // Null character
    printf("%d\n", ch); // 0    
    printf("%c\n", ch); // (null character)
    return 0;
}

#include <stdio.h>
int main(){
    char arr[] = {'H','e','l','l','o','0'};
    int i=0;
    while(arr[i]!= '\0'){
        printf("%c",arr[i]);//Hello
        i++;
    }
}
//****or****
#include <stdio.h>
int main(){
    char arr[] = "College Wallah/0";
    int i=0;
    while(i<14){
        printf("%c", arr[i]);//College Wallah
    }
    //or --> niche vala easy because print krne ke liye ek point de diya na ki char count krne pde
    while(arr[i] != '/0'){
        printf("%c", arr[i]);//College Wallah
    }
}