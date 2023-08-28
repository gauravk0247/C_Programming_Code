#include <stdio.h>

int main(){
	int num;
	printf("Enter the number \n");
	scanf("%d", &num);
	if(num==1){
		printf("The value of a is 1");
	}
	else if(num<=12){
		printf("The number is less than 12");		
	}
	else if(num>=45){
		printf("The number is greater than 45");
	}
	else{
		printf("The number is different");
	}
}
