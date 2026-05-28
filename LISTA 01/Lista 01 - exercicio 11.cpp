#include<stdio.h>
#include<stdlib.h>

int main( ){
int numero1,numero2;

	printf("Digite um numero: ");
	scanf("%d",&numero1);
	printf("Digite outro numero: ");
	scanf("%d",&numero2);

	if(numero1<numero2) {
	printf("O primeiro numero e menor! %d\n",numero1);
} 	else {
	printf("O segundo numero e menor! %d\n",numero2);
}
	system("PAUSE");
	return 0; 
}

