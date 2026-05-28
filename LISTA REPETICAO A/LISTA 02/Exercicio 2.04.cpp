#include<stdio.h>
#include<stdlib.h>

main(){
	
	int numero,soma=0;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	printf("Os divisores sao:\n");
	
	for(int i=1; i <=numero ; i++){
		if( numero % i == 0){
		printf("%d\n", i);
		soma = soma + i;	
	}
}
	printf("A soma de todos os divisores e: %d\n",soma);

    system("PAUSE");
    return 0;

	}	
