#include <stdio.h>
#include<string.h>

int main()
{
    char st1[34];
    char st2[34];
    char c;
    int i = 0;

    printf("Enter the value of first string\n");
    scanf("%s", st1);
    printf("Enter the value of second string character by chracter\n");

    while (c!='\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';

    printf("The value os st1 is %s\n", st1);
    printf("The value os st2 is %s\n", st2);
    printf("strcmp for strings returns %d\n", strcmp(st1, st2));
    
    return 0;
}