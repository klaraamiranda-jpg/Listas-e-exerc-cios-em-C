#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main() {

    float a,b,c,delta,raiz1,raiz2,raiz;

    printf("Digite o valor de a: ");
    scanf("%f",&a);
    printf("Digite o valor de b: ");
    scanf("%f",&b);
    printf("Digite o valor de c: ");
    scanf("%f",&c);
   
    if (a ==0){
        printf("Programa encerrado - O valor de 'a' precisa ser diferente de zero, tente novamente!!!!\n");
    } else{
        delta=pow(b, 2) - 4*a*c;
       
        if (delta < 0){
          printf("A equacao nao possui raizes\n");
         
        } else if (delta == 0){
            raiz= -b/(2*a);
            printf("A equacao possui as seguinte raiz: %.1f\n",raiz);
           
        } else{
            raiz1= (-b + sqrt(delta))/(2*a);
            raiz2= (-b - sqrt(delta))/(2*a);
            printf("A equacao possui duas raizes reais diferentes.\nRaiz 01:%.1f\nRaiz 02:%.1f\n",raiz1,raiz2);
        }
    }

    system("PAUSE");
     return 0;
 }

