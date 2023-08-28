#include <stdio.h>

int main(){
    int a;
    printf("Enter a number \n");
    scanf("%d", &a);
    printf("Multiplication Table \n");
    for (int i = 10; i; i--)        
    {
        printf("%d \n",a*i);
    }
    
}