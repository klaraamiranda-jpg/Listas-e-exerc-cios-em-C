#include <stdio.h>

int main() {
    int n, resultado = 0, sinal = 1;

    printf("Digite numeros (0 para parar):\n");
    scanf("%d", &n);

    while (n != 0) {
        resultado += n * sinal; // Multiplicar pelo sinal alterna entre somar e subtrair
        sinal *= -1;            // Inverte o sinal para a proxima rodada (1 vira -1, -1 vira 1)
        scanf("%d", &n);
    }

    printf("Resultado final: %d\n", resultado);
    return 0;
}
