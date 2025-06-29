// #include <stdio.h>
// int main(){
//     printf("Hello PW");
//     // printf("\n");
//     printf("\nshifa");
//     return 0;
// }
//      or
// #include <stdio.h>
// int main(){
//     printf("Hello PW\nshifa");
//     return 0;
// }

// // output-->Hello PW
// // shifa


// #include <stdio.h>
// int main(){
//     printf("Hello PW\nshifa\n");
//     int x;
//     x = 5;
//     printf("%d",x);
//     printf("\n");
//     x = 6;
//     printf("%d",x);
//     printf("\n");
//     x = x + 60;
//     printf("%d", x);
//     printf("\n");
//     x = x - 88;
//     printf("%d", x);
//     printf("\n");
//     x = x - 2;
//     printf("%d", x);
//     return 0;
// }

// //output--> Hello PW
// //shifa
// //5
// //6
// //66
// //-22
// //-24


// #include <stdio.h>
// int main(){
//     int x = 5;
//     int y = 2;
//     printf("%d\n", x+y);
//     printf("%d\n", x-y);
//     printf("%d\n", x*y);
//     printf("%d\n", x/y);
// }

// //output-->7
// //3
// //10
// //2


// #include <stdio.h>
// int main(){
//     float x = 5;
//     float y = 2;
//     printf("%f\n", x+y);
//     printf("%f\n", x-y);
//     printf("%f\n", x*y);
//     printf("%f\n", x/y);
//     float z = 5/2;
//     printf("%f\n", z);
//     float a = 5.0/2;
//     printf("%f\n", a);
//     float b = 5/2.0;
//     printf("%f\n", b);
//     float c = 5.0/2.0;
//     printf("%f\n", c);
//     return 0;
// }

// //output-->7.000000
// //3.000000
// //10.000000
// //2.500000
// //2.000000
// //2.500000
// //2.500000
// //2.500000


// #include <stdio.h>
// int main() {
//     float p, r, t, si;
//     p = 152;
//     r = 10;
//     t = 2;
//     si = (p*r*t)/100;
//     printf("%f",si);
//     return 0;
// }

// // output--> 30.400000


// #include <stdio.h>
// int main(){
//     int a = 10;
//     int b = -20;
//     int c = a+b;
//     printf("%d",c);
// }

// // output--> -10


//question = why did the floating points value 
//answer = 
#include <stdio.h>
int main(){
    float a = 9.0f;
    float b = 2.5f;
    // 2x10^-4
    float c = 2E-4f;
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f", c);
 }

 // write three programs on int, float, char


  #include <stdio.h>
 int main(void)
 {
     // output may depend upon the compiler
     printf("My mobile number is 7\t8\a7\a3\v9\a2\a3\n4\a0\a8\a");
     return (0);
 }
 //output--> My mobile number is


 #include <stdio.h>

int main(){
    float principal, rate, time, si;
    printf("Enter principal: ");
    scanf("%f",&principal);
    printf("Enter  Rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);
    si = (principal*rate*time)/100;
    printf("Your simple interest is : %f", si);
    return 0;
}
// output--> 55.000000


#include <stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    int y;
    y = x;
    printf("%d\n",y);
    float z= x-y;
    printf("%f",z);
    return 0;
}
//output-->58.89
//58
//0.889999


 #include <stdio.h>  // For printf()
 #include <stdbool.h>  // For boolean data type (bool, true, false)
 // Main Function
 int main() {
    // Boolean data types declared
    bool a = true;  // 'a' initialized to true
    bool b = false; // 'b' initialized to false
    // Printing Boolean values as integers (true = 1, false = 0)
    printf("True : %d\n", a); 
    printf("False : %d\n", b); 
    return 0;
}
//output--> True: 1
// False: 0

//**********or*********** */

#include <stdio.h>
 typedef enum { false, true } bool;
 int main()
 {
 bool a = true;
 bool b = false;
 printf("True : %d\n", a);
 printf("False : %d", b);
 return 0;
 }
