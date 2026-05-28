#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    long long potencia = 1; // Começa com 1. Se b for 0, o resultado será 1.

    printf("Digite a base (a > 0): ");
    scanf("%d", &a);
    printf("Digite o expoente (b >= 0): ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        potencia = potencia * a; // Multiplica o resultado pela base sucessivamente
    }

    printf("%d elevado a %d e: %lld\n", a, b, potencia);

    system("PAUSE");
    return 0;
}
