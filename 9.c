#include <stdio.h>

int main(){
	int mark;
	printf("Enter a marks \n");
	scanf("%d",&mark);
	switch(mark){
		case 90:
			printf("The marks is very good \n");
			break;
		case 80:
			printf("The marks is good \n");
			break;
		case 70:
			printf("The marks is average \n");
			break;
		case 60:
			printf("The marks is poor \n");
			break;
		default:
			printf("The result is not good \n");
			break;
	}
}
