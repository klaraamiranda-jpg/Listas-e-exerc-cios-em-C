#include<stdio.h>
#include<stdlib.h>

int main( ){

float nota1,nota2,nota3,media;

	printf("Digite a nota 01: ");
	scanf("%f",&nota1);
	printf("Digite a nota 02: ");
	scanf("%f",&nota2);
	printf("Digite a nota 03: ");
	scanf("%f",&nota3);

	media=(nota1+nota2+nota3)/3;
	printf("A media do aluno e: %2.f\n",media);

	if(media >=7.0){
	printf("ALUNO APROVADO!!");
} 	else {
	printf("ALUNO REPROVADO!!\n");
}
	system("PAUSE");
	return 0; 
}

