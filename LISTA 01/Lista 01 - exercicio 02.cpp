#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

main(){
	
	setlocale(LC_ALL,"Portuguese");
	float salario_atual,salario_reajuste;
	
	//usuario difita o valor do salário atual 
	printf("Insira o valor do seu salário R$:  ");
	scanf("%f",&salario_atual);
	
	if (salario_atual < 500) {
		//cálculo do valor do reajuste do aumento de 30% = 0.30 ou 30.0/100.0 	
		//para acrescentar o valor total do salário ao reajuste, fazer a soma dos valores 
		salario_reajuste = (salario_atual*0.30)+salario_atual;
		printf("Você tem direito ao reajuste de salário! Seu salário agora será de R$: %.2f\n",salario_reajuste);
		
	} else	
		{
			printf("Você não tem direito ao reajuste de salário!\n");	
	}		
	system("PAUSE");
	return 0;
}
