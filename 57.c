#include <stdio.h>

int main(){
    // char str[] = "Gaurav";
    char str[] = {'G','A','U','R','A','V','\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}