#include<stdio.h>
main(){
	
	int i,j,primo;
	for(i = 2; i <= 100; i++){
		primo = 1;
		
		for(j = 2; j < i; j++){
			if(i % j == 0){
			primo = 0;
				
			}	
		}
		if(primo == 1){
		printf("%d ", i);
		}
	}	
}
