#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

main(){
	
	setlocale(LC_ALL,"Portuguese");
	int numero;
	
	printf("Por favor, digite um número para verificarmos se é ímpar ou par: ");
	scanf("%d",&numero);
	
	if (numero % 2 == 0){
	printf("Este número é par!\n");
} 	else {
	printf("Este número é ímpar!\n");

}
	system("PAUSE");
	return 0;
}
