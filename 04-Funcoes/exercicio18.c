#include<stdio.h>

int ehPerfeito(int num) {
    int soma = 0;
    int i;
    
    for (i = 1; i < num; i++) {
        if(num % i == 0){
			soma += i;
    	}
    }	
	
	if(soma == num){
		return 1;
	} else{
		return 0;
	}	
}
int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (ehPerfeito(n) == 1) {
        printf("O numero %d eh perfeito! \n", n);
    } else {
        printf("O numero %d nao eh perfeito! \n", n);
    }
    return 0;
}
