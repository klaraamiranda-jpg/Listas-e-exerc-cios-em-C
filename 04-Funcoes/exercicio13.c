#include<stdio.h>

int menu(){
	int opcao;
	printf("---------OPCOES DISPONIVEIS--------\n");
	printf("1 - Soma de dois numeros\n");
	printf("2 - Subtracao de dois numeros\n");
	printf("3 - Multiplicacao de dois numeros\n");
	printf("4 - Divisao de dois numeros\n");
	printf("0 - Sair\n");
	printf("---------------------------------\n");
	
	printf("Digite sua opcao: ");
	scanf("%d",&opcao);
	
	
	return opcao;
}
int main(){
	int escolha,n1,n2,res;
	
	escolha=menu();
	
	while(escolha != 0){
		
		switch(escolha){
			
		case 1:
			printf("Digite o n1 e n2:");
			scanf("%d %d",&n1,&n2);
			res=n1+n2;
			printf("Resultado da soma: %d\n", res);
			break;
				
		case 2:
			printf("Digite o n1 e n2:");
			scanf("%d %d",&n1,&n2);
			res=n1-n2;
			printf("Resultado da subtracao: %d\n", res);	
			break;
		
		case 3:	
			printf("Digite o n1 e n2:");
			scanf("%d %d",&n1,&n2);
			res=n1*n2;
			printf("Resultado da multiplicacao: %d\n", res);
			break;
		
		case 4:
			printf("Digite o n1 e n2 diferente de 0:");
			scanf("%d %d",&n1,&n2);
			
			 if(n2 != 0){
                    res = n1 / n2;
                    printf("Resultado da divisao: %d\n", res);
                } else {
                    printf("Erro: divisao por zero nao permitida!\n");
                }
                break;
                
		default:
			printf("Opcao invalida!");	
		}
		
		printf("\n");
		escolha = menu();                         
	}
    
		printf("Saindo do programa...\n");
    	return 0;
}
