#include<stdio.h>
main(){
	
	int n, i, fat = 1;
	
	printf("Digite um numero para saber o fatorial: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++){
		fat = fat * i;	
	}
	printf("Fatorial de %d eh %d",n,fat);
	
}
