#include<stdio.h>
main(){
	
	int n, i, j, div, qtd_primo=0;
	
	printf("Digite um numero inteiro e positivo: ");
	scanf("%d",&n);
	
	for(i = 2; i <= n; i++){
		div=0;
	
		for(j = 1; j <= i; j++){
			if(i % j == 0){
			div++;
			}
		}
		if( div == 2){
			printf("%d\n",i);
			qtd_primo++;
		}
	}
	printf("Qtd numeros primos: %d",qtd_primo);
}
