#include <stdio.h>
int main(){
    int i = 2*3/4+4/4+8-2+5/8;
    printf("%d", i);
    return 0;
}
//output-->8


#include <stdio.h>
int main(){
    int i = 2, j = 3, k, l;
    float a,b;
    k = i/j*j;
    l = j/i*i;
    a = i/j*j;
    b = j/i*i;
    printf("%d %d %f %f", k, l, a, b);
    return 0;
}
// output--> 0 2 0.000000 2.000000


#include <stdio.h>
int main(){
    char ch = 'a';
    printf("%c", ch);
    return 0;
}
//output-->a
