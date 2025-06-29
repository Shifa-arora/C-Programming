#include <stdio.h>
int main(){
    struct book{
        char name[50];
        int pages;
        float price;
    }a,b,c;

    a.pages = 100;
    a.price = 100.50;
    // a.name = "Secret of success"; // This line will cause an error because you cannot assign a string to a char array directly like this.
    // a.name[0] = 'S'; // You can assign individual characters to the array.
    // a.name[1] = 'e';
    // a.name[2] = 'c';
    // a.name[3] = 'r';    
    // a.name[4] = 'e';
    // a.name[5] = 't';
    // a.name[6] = ' ';
    // a.name[7] = 'o';
    // a.name[8] = 'f';
    // a.name[9] = ' ';
    // a.name[10] = 's';
    // a.name[11] = 'u';
    // a.name[12] = 'c';
    // a.name[13] = 'c';
    // a.name[14] = 'e';
    // a.name[15] = 's';
    // a.name[16] = 's';
    char ch[16];
    strcpy(a.name, "Secret of success"); // Use strcpy to copy the string into the array.
    

    printf("%d\n", a.pages);
    printf("%f\n", a.price);
    printf("%s\n", a.name); // This will also cause an error because a.name is not a string but a char array.
    // You need to use a string function like strcpy to copy the string into the array.

    b.pages = 200;
    b.price = 200.50;   
    strcpy(b.name, "Physics Wallah"); // Use strcpy to copy the string into the array.
    printf("%d\n", b.pages);
    printf("%f\n", b.price);
    printf("%s\n", b.name);

    c.pages = 300;
    c.price = 300.50;
    strcpy(c.name, "C++ Programming"); // Use strcpy to copy the string into the array.
    printf("%d\n", c.pages);
    printf("%f\n", c.price);
    printf("%s\n", c.name);
}