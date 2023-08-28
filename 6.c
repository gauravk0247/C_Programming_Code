#include <stdio.h>

int main(){
	int age;
	printf("Enter Your Age \n");
	scanf("%d", &age);
	if(age!=18){
		printf("You Can Drive the Car");
	}
//	elseif(age>=25){
//		printf("you can drive two wheeler");
//	}
	else{
		printf("You can not drive the car");
	}
}
