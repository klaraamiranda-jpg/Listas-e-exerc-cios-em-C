#include<stdio.h>
main(){
	
	int i, n;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("-----Divisores de %d:-------\n", n);
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d ",i);
		}
	}
}
