#include<stdio.h>

void multiplos_3(){
	int i;
	for(i=3;i<=100;i+=3){
		printf("%d ", i); 
	}	
}
int main(){
	printf("Os multiplos de tres sao:\n");
	multiplos_3();
	return 0;
}
