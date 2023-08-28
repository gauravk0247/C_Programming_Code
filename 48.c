#include <stdio.h>

// void printArray(int *ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("The value of elements %d is %d\n", i+1, *(ptr+i));
//     }
// }

void printArray(int ptr[], int n){
    for(int i=0; i<n; i++){
        printf("The value of elements %d is %d\n", i+1, ptr[i]);
    }
    ptr[2] = 5555; //This value will be change in arr array of main as well
}

int main(){
    int arr[] = {51, 34, 56, 67 ,78, 90, 45};
    printArray(arr, 7);
    printf("%d", arr[2]);
    return 0;
}