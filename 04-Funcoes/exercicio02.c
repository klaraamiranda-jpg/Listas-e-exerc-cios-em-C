#include <stdio.h>

void verificar_par(int num) {
	if(num % 2 == 0){
	printf("Esse numero eh par");	
		} else{
			printf("Numero impar");
	}
}

int main() {
    int n;
    printf("Digite um num: ");
    scanf("%d",&n);
    
	verificar_par (n);
    
    return 0;
}
