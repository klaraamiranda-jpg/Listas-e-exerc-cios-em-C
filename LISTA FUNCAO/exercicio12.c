#include<stdio.h>

void fibonacci (int n){
	int a=0, b=1, prox, i;
	for(i=0;i<n;i++){
		printf("%d ",a);
		prox = a+b;
		a=b;
		b=prox;
	}
	printf("\n");
}

int main(){
	int qtd;
	printf("Digite a qtd de numeros da sequencia que deseja:");
	scanf("%d",&qtd);
	qtd=fibonacci(qtd);
	return 0;
}
