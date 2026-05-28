#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int n;
    long long resultado = 1; 

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um numero natural (0 ou maior).\n");
    } else if (n == 0 || n == 1) {
        printf("%d!! = 1\n", n);
    } else {
        
        for (int i = n; i > 0; i -= 2) {
            resultado = resultado * i; 
        }

        printf("O fatorial duplo de %d (%d!!) e: %lld\n", n, n, resultado);
    }

    system("PAUSE");
    return 0;
}
