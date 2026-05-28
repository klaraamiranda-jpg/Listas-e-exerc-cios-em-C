#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

main(){
	
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	
	if (idade >=18){
		
		printf("Maioridade!");

	} else{
		
		printf("Menoridade\n");
	}

		system("PAUSE");
	return 0;
}
