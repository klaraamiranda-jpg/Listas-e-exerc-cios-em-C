#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

main(){
	
	setlocale(LC_ALL,"Portuguese");
	char sexo;
	float peso_ideal, altura;
	
	printf("Digite a sua altura: ");
	scanf("%f",&altura);
	printf("Digite o seu sexo (F ou M): ");
	scanf(" %c", &sexo);
	
	if (sexo == 'M'){
		peso_ideal =  (72.7 * altura) - 58;
		printf("Homem, seu peso ideal é: %2.f\n",peso_ideal);
	}
	 	else{
	 		
	 		peso_ideal = (62.1 * altura) - 44.7;
	 		printf("Mulher, seu peso ideal é: %2.f\n",peso_ideal);
		 }
	system("PAUSE");
	return 0;
}
