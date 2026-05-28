#include<stdio.h>
main(){
	
	int i,j;

	printf("Tabuada do 1 ao 10: \n");
	
	for(i = 1; i <= 10; i++){
		for(j = 1; j <= 10; j++){
		printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");	
	}	
}
