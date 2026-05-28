#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main() {
    int op;
    float numero1,numero2,soma,valor,raiz;

    printf("Digite a opcao que representa a opcao da operacao que deseja realizar: \nDigite 1 para soma \nDigite 2 para raiz quadrada \nDigite 3 para finalizar\n");
    scanf("%d",&op);
   
    switch (op)
    {
        case 1:
        printf("Digite o valor numero 1: ");
        scanf("%f",&numero1);
        printf("Digite o valor numero 2: ");
        scanf("%f",&numero2);
        soma = numero1 + numero2;
        printf("A soma dos valores e: %2.f\n",soma);
        break;
 
     case 2:
   
        printf("Digite o valor numero o qual deseja saber a raiz quadrada: ",valor);
        scanf("%f",&valor);
         raiz =sqrt(valor);
        printf("A raiz quadrada de %.1f e: %.1f\n",valor,raiz);
        break;
   
    case 3:
        printf("Programa encerrado\n");
      break;
 }      
       system("PAUSE");
       return 0;
}
