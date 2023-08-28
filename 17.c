#include <stdio.h>

int main(){
	int i;
//	for(i=1;i<=10;i++){
//		if(i==2){
//			continue;
//		}
//		printf("%d \n",i);
//	}

//	while(i<=10){
//		if(i==3){
//			break;
//		}
//		printf("%d \n",i+1);
//		i++;
//	}

	do{
		if(i==4){
			break;
		}
		printf("%d \n",i+1);
		i++;
	}while(i<10);
}
