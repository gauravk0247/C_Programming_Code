#include <stdio.h>

int main(){
	int num;
	printf("Enter a number \n");
	scanf("%d", &num);
	int i;
	for(i=1;i<=10;i++){
		printf("%d %d\n",num*i);
	}
}
