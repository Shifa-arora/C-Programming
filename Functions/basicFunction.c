// #include <stdio.h>
// int main(){
//     for(int i=1; i<=5; i++){
//         printf("Hello, World!\n");
//     }
//     return 0;
// }

#include <stdio.h>
void greet(){
    printf("Good Morning\n");
    printf("How are you?\n");
}
int main(){
    greet();
    greet();
    greet();
    greet();
    greet();
    return 0;
}




#include <stdio.h>
void Australia(){
    printf("You are in Australia.\n");
    return;
}
void India(){
    printf("you are in India.\n");
    return;
}
void Error(){
    printf("Please enter correct country.\n");
    return;
}
int main(){
    Australia();
    return 0;
}