#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

main(){
	
	setlocale(LC_ALL,"Portuguese");
	float trabalho_lab,avaliacao_sem,exame_final,media_ponderada;
	
	printf("Por favor, digite a nota do trabalho de laboratório: ");
	scanf("%f",&trabalho_lab);
	printf("Por favor, digite a nota da avaliação semestral: ");
	scanf("%f",&avaliacao_sem);
	printf("Por favor, digite a nota do exame final: ");
	scanf("%f",&exame_final);

	media_ponderada = ((trabalho_lab*2)+(avaliacao_sem*3)+(exame_final*5))/10.0;
	printf("A média final do estudante é: %.2f\n",media_ponderada);
	
	if (media_ponderada >= 8.01 && media_ponderada <= 10.0) {
   	printf("Conceito A\n"); 	
} 	else if (media_ponderada >= 7.01 && media_ponderada <= 8.0) {
    printf("Conceito B\n");
}	else if (media_ponderada >= 6.01 && media_ponderada <= 7.0) {
    printf("Conceito C\n");
}	else if (media_ponderada >= 5.01 && media_ponderada <= 6.0) {
    printf("Conceito D\n");
}	else {
    printf("Conceito E\n");
}
	system("PAUSE");
	return 0;
}
