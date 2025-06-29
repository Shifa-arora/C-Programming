// write three programs on int, float, char

#include <stdio.h>
int main(){
    int a = 25, b = 52, r;
    r = b%a;
    printf("%d",r);
    return 0;
}
//**********or*********** */
#include <stdio.h>
int main(){
    int a, b, r;
    scanf("%d\n",&a);
    scanf("%d",&b);
    r = b%a;
    printf("%d",r);
    return 0;
}
//output-->25

#include <stdio.h>
int main(){
    char ch = 'a';
    printf("%c", ch);
    return 0;
}
//*********or********** */
#include <stdio.h>
int main(){
    char ch;
    scanf("%c", ch);
    printf("%c", ch);
    return 0;
}
//output-->a

#include <stdio.h>
int main(){
    float a = 58.24526, b = 15.896, c;
    c = a/b;
    printf("%f", c);
    return 0;
}
//*********or********* */
#include <stdio.h>
int main(){
    float a, b, c;
    scanf("%f",&a);
    scanf("%f", &b);
    c=a/b;
    printf("%f", c);
}
//output--> 3.664146

#include <stdio.h>
int main(){
    char ch = 'a';
    printf("%d", ch);
    return 0;
}
//*********or********** */
#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    printf("%d", ch);
    return 0;
}
//output--> 97