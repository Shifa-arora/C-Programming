// #include <stdio.h>

// int main()
// {
//     int a=5;
//     int* x = &a;
//     printf("%p\n", x); // %p se address print hota h and agar %d likh de to error aa jayega
//     // 0x se start hoyega
//     printf("%p\n", *x);  //pointing to the value jiske andar uska address store h
//     printf("%d\n", *x);  // gives value of x
//     printf("%p\n", &x);
//     return 0;
// }



#include <stdio.h>

int main()
{
    int a=5;
    int* x;
    x = &a;
    //*x = &a; // give an error
    printf("%p\n", &a);
    // ******OR******
    printf("%p\n", x);
    printf("%p\n", *x);
    
    //swaping numbers
    *x = 8;
    printf("%d\n", a);
    // printf("%d\n", *a); // gives error
    
    return 0;
}