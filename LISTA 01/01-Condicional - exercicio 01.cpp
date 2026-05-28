#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3,nota4,media;
	
	// introdução das notas pelo usuário 
	printf("Digite a nota da matéria 01: ");
	scanf("%f",&nota1);
	printf("Digite a nota da matéria 02: ");
	scanf("%f",&nota2);
	printf("Digite a nota da matéria 03: ");
	scanf("%f",&nota3);
	printf("Digite a nota da matéria 04: ");
	scanf("%f",&nota4);
	
	//cálculo da média 
	media = (nota1+nota2+nota3+nota4)/4;
	printf("A média do aluno(a) é: %.2f\n",media);
	
	if (media >= 7.0){
		printf("Aprovado\n");
				
	} 
		else {
		printf("Reprovado\n");
	}
				
	system("PAUSE");
	return 0;
}
