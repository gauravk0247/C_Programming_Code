#include <stdio.h>

int main(){
    int marks[2][4] = {{34, 56, 78, 90}, {44, 67, 88, 45}};

    // for(int i=0;i<4;i++){
    //     printf("Enter the value of %d element of the array\n", i); 
    //     scanf("%d", &marks[i]);
    // }
    for(int i=0;i<2;i++){
        for (int j = 0; j < 4; j++)
        {
        // printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]); 
        printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    // marks[0] = 54;
    // printf("Marks of student 4 is %d\n", marks[0]);
    // marks[0] = 46;
    // marks[0] = 88;
    // marks[0] = 72;
    // printf("Marks of student 4 is %d\n", marks[0]);
    return 0;
}