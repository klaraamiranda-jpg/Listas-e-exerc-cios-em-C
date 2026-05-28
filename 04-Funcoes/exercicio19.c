#include<stdio.h>

float calcularMediaIdades(int totalPessoas) {
    int i, idade;
    float media, soma = 0;

    for (i = 1; i <= totalPessoas; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d",&idade);
		soma += idade;
    }
    media = soma / totalPessoas;
}
int main() {
    int total;

    printf("Quantas pessoas estao no grupo? ");
    scanf("%d", &total);
    
    printf("\nA media das idades eh: %.2f\n",calcularMediaIdades(total));

    return 0;
}
