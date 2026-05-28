#include<stdio.h>
main(){
	
	int n, qtd_n = 0, soma = 0, maior, menor; 
	float media;
	

	printf("Digite um numero (0 para parar): ");
	scanf("%d",&n);
	
	if(n != 0){
		maior = n;
		menor = n;
	}
	while(n != 0){
		qtd_n++;
		soma = soma + n;
		
		if(n > maior){
            maior = n;
    	}
		if( n < menor){
			menor = n;
		}
		printf("Digite outro numero (0 para parar):");
		scanf("%d",&n);
	}

		if (qtd_n > 0){
		media = (float)soma / qtd_n;

        printf("Quantidade: %d\n", qtd_n);
        printf("Soma: %d\n", soma);
        printf("Maior: %d\n", maior);
        printf("Menor: %d\n", menor);
        printf("Media: %.2f\n", media);
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }

    return 0;
}



