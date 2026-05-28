#include<stdio.h>

void imprimirDivisores(int num) {
	int i;
    printf("Divisores de %d: ", num); 
    for(i = 1; i <= num; i++) {
        if(num % i == 0){
		printf("%d-",i); 
		}
	}
	printf("\n");
}
int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	imprimirDivisores(n);
	return 0; 
}
