#include<stdio.h>

int n_fatorial(int fatorial){
	int resultado=1;
	int i;
	for(i=1;i<=fatorial;i++){
		resultado = resultado*i;
	}
	return resultado;
}
int main(){
	int fat;
	printf("Digite um num para fazer o fatorial: ");
	scanf("%d",&fat);
	printf("O fatorial de %d eh: %d\n", fat, n_fatorial(fat));
}
