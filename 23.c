#include <stdio.h>

int sub(int a, int b);
int main(){
    int c = sub(5, 10);
    printf("%d", c);
    return 0;
}

int sub(int a, int b){
    int result;
    result = a - b;
    return result;
}