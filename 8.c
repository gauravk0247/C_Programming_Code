#include <stdio.h>

int main(){
	int num ;
	printf("Enter the number \n");
	scanf("%d", &num);
	switch(num){
		case 1:
			printf("The number is 1 \n");
			break;
		case 2:
			printf("The number is 2 \n");
			break;
		case 3:
			printf("The number is 3 \n");
			break;
		case 4:
			printf("The number is 4 \n");
			break;
		case 5:
			printf("The number is 5 \n");
			break;
		default:
			printf("The number is invalid \n");
			break;
	}
}
