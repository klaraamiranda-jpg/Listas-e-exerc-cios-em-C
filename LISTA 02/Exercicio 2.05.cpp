#include<stdio.h>
#include<stdlib.h>

main(){
	
	int numero,contador=0;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);

	for(int i=1; i <=numero ; i++){
		if( numero % i == 0){
		printf("%d\n", i);
		contador++;	
		}
	}	
	
	if(contador == 2 ){
	printf("O numero %d e primo!!\n",numero);
	}	else {
		printf("O numero nao e primo\n",numero);
	}
	system("PAUSE");
    return 0;

	}
