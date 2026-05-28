#include<stdio.h>
main(){

    int n, i; 
    int a = 0, b = 1, prox; 

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        printf("%d ", a);
        prox = a + b;
        a = b;
        b = prox;
       
    }
}
