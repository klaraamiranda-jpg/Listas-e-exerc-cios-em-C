#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int numero, palpite, opcao;

    do{
        srand(time(NULL)); 
        numero = rand() % 11; 
        // gera número de 0 a 10

        do{
            printf("Tente adivinhar o numero (0 a 10): ");
            scanf("%d", &palpite);

            if(palpite < numero){
                printf("Numero escolhido eh maior\n");
            } 
            else if(palpite > numero){
                printf("Numero escolhido eh menor\n");
            } 
            else {
                printf("Parabens, voce acertou!\n");
            }

        } while(palpite != numero);

        printf("Deseja jogar novamente?\n1 - Sim\n2 - Nao\n");
        scanf("%d", &opcao);

    } while(opcao == 1);

    return 0;
}
