#include <stdio.h>

void verificar_mm(int n1,int n2) {
	if(n1>n2){
		printf("O N1 eh maior que N2: %d",n1);
	} 	else if (n1 == n2){
			printf("N1 eh igual a N2: %d=%d",n1,n2);
		}  else{
			printf("O N2 eh maior que N1: %d",n2);
	}
}

int main() {
    int v1,v2;
    printf("Digite um num1: \n");
    scanf("%d",&v1);
    printf("Digite um num2: \n");
    scanf("%d",&v2);
    
	verificar_mm(v1,v2);
    
    return 0;
}
