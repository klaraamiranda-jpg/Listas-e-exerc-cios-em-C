#include <stdio.h>

int encontrar_maior(int n1,int n2) {
	if(n1>n2){
		return(n1);	
	} else {
		return(n2);	
	}
}
int main() {
    int v1,v2;
    printf("Digite um num1: \n");
    scanf("%d",&v1);
    printf("Digite um num2: \n");
    scanf("%d",&v2);
    
    printf("O numero maior eh: %d",encontrar_maior(v1, v2));
    return 0;
}
