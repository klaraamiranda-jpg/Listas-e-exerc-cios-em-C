#include<stdio.h>
main(){
	
	int i=2, primo=1,num;
	
	printf("Digite um numero para verificar se ele eh primo: ");
	scanf("%d",&num);
	
	// números <= 1 não são primos
	if(num <=1){
		primo = 0;
		}
		
	while(i < num){ // enquanto i for menor que n (não testa o próprio número)
		if(num % i ==0){ // verifica se n é divisível por i
		primo = 0;	// achou divisor? não é primo
		}	
		
		i++;// testa o próximo possível divisor	
	}
		if(primo == 1){
			printf("Numero primo\n");
		} else {
			printf("Nao e primo\n");
		}	
}
