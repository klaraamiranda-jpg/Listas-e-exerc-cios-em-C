#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int qtdPar = 0, qtdImpar = 0;
    int maxPar, minPar, maxImpar, minImpar;

    printf("Digite uma sequencia de numeros (termine com 0):\n");
    scanf("%d", &n);

    while (n != 0) {
        if (n % 2 == 0) { 
            qtdPar++;
            // Se for o primeiro par encontrado, ele é o maior e o menor atual
            if (qtdPar == 1) {
                maxPar = n;
                minPar = n;
            } else {
                if (n > maxPar) maxPar = n;
                if (n < minPar) minPar = n;
            }
        } else { // Caso contrário, ÍMPAR 
            qtdImpar++;
            // Se for o primeiro ímpar, ele assume os postos de maior e menor
            if (qtdImpar == 1) {
                maxImpar = n;
                minImpar = n;
            } else {
                if (n > maxImpar) maxImpar = n;
                if (n < minImpar) minImpar = n;
            }
        }
        
        // Lê o próximo número ANTES de voltar ao início do while
        scanf("%d", &n);
    }

    printf("\n--- RESULTADOS ---\n");
    printf("Pares: %d\n", qtdPar);
    if (qtdPar > 0) printf("Maior Par: %d, Menor Par: %d\n", maxPar, minPar);

    printf("Impares: %d\n", qtdImpar);
    if (qtdImpar > 0) printf("Maior Impar: %d, Menor Impar: %d\n", maxImpar, minImpar);

    system("PAUSE");
    return 0;
}
