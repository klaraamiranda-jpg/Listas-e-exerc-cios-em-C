#include<stdio.h>

int valor_lido(){
	int valor;
	printf("Digite um numero: ");
	scanf("%d",&valor);
	return valor;
}
int main(){
	int num;
	num=valor_lido();
	printf("Valor lido: %d\n", num);
    return 0;
}
