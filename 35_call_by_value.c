#include <stdio.h>

int sum(int a, int b);
int main(){
    int a=4, b=6;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of 4+6 is %d\n", sum(a, b));
    printf("The value of a and b after function call is %d and %d\n", a, b);
    return 0;
}

int sum(int a, int b){
    int c;
    c = a + b;
    b = 4343;
    a = 78543;
    return c;
}