#include <stdio.h>
#include<string.h>
int main(){
    char st1[45] = "Hii ";
    char *st2 = "Gaurav";
    strcat(st1, st2);
    printf("Now the st1 is %s", st1);
}