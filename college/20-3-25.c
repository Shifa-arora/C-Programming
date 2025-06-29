#include <stdio.h>
int main()
{
    int a=20;
    int *p;
    p = &a;
    printf("Pointer before increment: ");
    printf("%p\n", p);
    p++;
    printf("Pointer after increment: ");
    printf("%p\n", p);
    ++p;
    printf("Pointer after increment: ");
    printf("%p\n", p);
    return 0;
}


#include <stdio.h>
int main(){
    int x=50;
    int *ptr1 = &x;
    int *ptr2 = &x;
    int y = ++*ptr2;
    printf("%d %d", ++*ptr2, y);
    return 0;
}


#include <stdio.h>
int main(){
    int num1, num2, sum;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter any two numbers: ");
    scanf("%d %d", ptr1, ptr2);
    sum = *ptr1 + *ptr2;
    printf("Sum= %d", sum);
    return 0;
}
