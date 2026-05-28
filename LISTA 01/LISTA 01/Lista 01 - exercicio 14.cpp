#include<stdio.h>
#include<stdlib.h>

    int main() {
    int codigo;
   
    printf("Digite o codigo do seu cargo para saber se voce tem direito ao aumento e qual o percentual (1-5): ");
    scanf("%d",&codigo);
   
    switch (codigo)
    {
    case 1:
        printf("Cargo: Escriturario - Aumento: 50%%\n");
        break;
       
    case 2:
        printf("Cargo: Secretario - Aumento: 35%%\n");
        break;
       
    case 3:
        printf("Cargo: Caixa - Aumento: 20%%\n");
        break;
       
    case 4:
        printf("Cargo: Gerente - Aumento: 10%%\n");
        break;
       
    case 5:
        printf("Cargo: Diretor - Nao tem direito ao aumento! \n");
        break;
   
    default:
        printf("Codigo invalido!\n"); 
    }      
    system("pause");
    return 0;
}
