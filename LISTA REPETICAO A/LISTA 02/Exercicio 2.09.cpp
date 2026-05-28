#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, numero, qtdPar = 0, qtdImpar = 0;
    int maxPar, minPar, maxImpar, minImpar;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            qtdPar++;
            if (qtdPar == 1) { maxPar = minPar = numero; }
            else {
                if (numero > maxPar) maxPar = numero;
                if (numero < minPar) minPar = numero;
            }
        } else {
            qtdImpar++;
            if (qtdImpar == 1) { maxImpar = minImpar = numero; }
            else {
                if (numero > maxImpar) maxImpar = numero;
                if (numero < minImpar) minImpar = numero;
            }
        }
    }
    printf("\n--- RESULTADOS ---\n");
    printf("Pares: %d\n", qtdPar);
    if (qtdPar > 0) printf("Maior Par: %d, Menor Par: %d\n", maxPar, minPar);

    printf("Impares: %d\n", qtdImpar);
    if (qtdImpar > 0) printf("Maior Impar: %d, Menor Impar: %d\n", maxImpar, minImpar);
    
 	system("PAUSE");
    return 0;
}
