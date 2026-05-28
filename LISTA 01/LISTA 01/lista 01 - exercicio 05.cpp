#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

main(){
	
	setlocale(LC_ALL,"Portuguese");
	float salario_atual,salario_reajuste;
	
	//usuario difita o valor do salário atual 
	printf("Insira o valor do seu salário R$:  ");
	scanf("%f",&salario_atual);
	
	if (salario_atual <= 300) {
	
		salario_reajuste = (salario_atual*0.50)+salario_atual;
		printf("Você tem direito ao reajuste de 50%% do seu salário! Seu salário agora será de R$: %.2f\n",salario_reajuste);
		
	} else	
		{
			salario_reajuste = (salario_atual*0.30)+salario_atual;
			printf("Você tem direito ao reajuste de 30%% do seu salário! Seu salário agora será de R$: %.2f\n",salario_reajuste);
	}
	system("PAUSE");
	return 0;
}
