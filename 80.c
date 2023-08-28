#include <stdio.h>
#include <string.h>

struct vector{
    int x;
    int y;
};

int main(){
    struct vector v1, v4;
    v1.x = 34;
    v1.y = 56;
    printf("X dim is %d and Y dim is %d\n", v1.x, v1.y);

    v4.x = 3334;
    v4.y = 5336;
    printf("X dim is %d and Y dim is %d\n", v4.x, v4.y);
    return 0;
}