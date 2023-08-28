#include <stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee gaurav = {100, 45.67, "Gaurav"};
    printf("Code is: %d \n", gaurav.code);
    printf("Salary is: %f \n", gaurav.salary);
    printf("Name is: %s \n", gaurav.name);
    return 0;
}