#include <stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main(){
    char c[] = "Tvddftt!pg!nz!mjgf!jt!nz!npn!boe!ebe";
    decrypt(c);
    printf("Decrypted string is: %s", c);
    return 0;
}