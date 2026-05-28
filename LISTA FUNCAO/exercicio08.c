#include <stdio.h>

int verificar_primo(int num) {
	if(num <= 1) {
		return 0;
	}

	int i;
	for (i=2; i<num;i++){
		if(num % i == 0){
			return 0; //não é primo
		}   
	} 	
	return 1;
}

int main() {
    int n;
    printf("Digite um num: \n");
    scanf("%d",&n);
    if(verificar_primo(n)==1){
    	printf("O numero eh primo!\n",n);
	}else{
		printf("O numero nao eh primo");
	}
   
    return 0;
}
