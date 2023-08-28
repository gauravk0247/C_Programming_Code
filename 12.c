#include <stdio.h>

int main(){
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	int i;
	for(i=10;i;i--){
		printf("%d %d \n", num*i);
	}
}
