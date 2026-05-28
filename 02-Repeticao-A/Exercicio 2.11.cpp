#include <stdio.h>

int main() {
    int n, digito;
    long long numeroFinal = 0;

    printf("Quantos digitos a sequencia tem? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &digito);
       
        numeroFinal = (numeroFinal * 10) + digito;
    }
    printf("O numero construido e: %lld\n", numeroFinal);
    
    return 0;
}
