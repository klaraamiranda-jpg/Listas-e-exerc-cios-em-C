#include<stdio.h>
main(){
	
	int i, opcao,qtd_div;
	
	printf("---------MENU-------\n");
	printf("1 -  Imprimir na tela os numeros pares de 1 a 100.\n");
	printf("2 -  Imprimir na telas os numeros impares 1 a 100.\n");
	printf("3 -  Imprimir na tela os numeros e a quantidade de numeros divisíveis por 5 entre 1 a 100.\n");
	printf("Digite a opcao desejada: ");
	scanf("%d",&opcao);
	
	switch (opcao){
		case 1:
			for(i = 1; i <= 100; i++){
				if( i % 2 == 0){
					printf("Pares de 1 a 100: %d ",i);	
				}
			}
		break;
			
		case 2:
			for(i = 1; i <= 100; i++){
				if( i % 2 == 1){
					printf("Impares de 1 a 100: %d ",i);	
				}	
			}
		break;
			
		case 3:
			for(i = 1; i <= 100; i++){
				if( i % 5 == 0){
					printf("%d ",i);
					qtd_div++;	
				}		
			}
			printf("Quantidade de dividores: %d\n",qtd_div);
			break;
	}	
}
