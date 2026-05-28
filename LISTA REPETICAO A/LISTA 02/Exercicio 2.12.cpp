#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    while (n > 0) {
        soma += (n % 10); // Pega o resto da divisao por 10 (o ultimo digito)
        n = n / 10;       // Remove o ultimo digito (divisao inteira)
    }

    printf("A soma dos digitos e: %d\n", soma);
    return 0;
}
