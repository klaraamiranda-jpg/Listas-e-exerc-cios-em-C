#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 
#include<string.h>

main(){
	
	setlocale(LC_ALL,"Portuguese");
	char senha_correta[6] = "ASDFG", senha_digitada[6];
	
	printf("Digite a senha: ");
	scanf("%s",senha_digitada);
	
	if (strcmp(senha_digitada, senha_correta)== 0){
		printf("Acesso Permitido!\n");
		
	} else {
		printf("Acesso Negado! Tente novamente...\n");
	}
	
	system("PAUSE");
	return 0;
}
