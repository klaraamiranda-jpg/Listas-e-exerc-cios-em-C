#include<stdio.h>

int calcularMMC(int a, int b) {
    int multi;
    
    if (a > b) {
        multi = a;
    } else {
        multi = b;
    }
    
    while (1) {
        
        if ( multi % a == 0 && multi % b == 0) {
            return multi; 
        }
        multi++; 
    }
}
int main(){
	int n1, n2;
	printf("Digite um numero inteiro: \n");
	scanf("%d",&n1);
	printf("Digite outro numero inteiro: \n");
	scanf("%d",&n2);
	printf("O MMC de %d e %d eh: %d\n", n1, n2, calcularMMC(n1, n2));
	return 0;
}

