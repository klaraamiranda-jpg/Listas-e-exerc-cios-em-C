#include <stdio.h>

int quadrado_num(int n1) {
	 return(n1*n1);	
	}
int main() {
    int v1;
    printf("Qual num deseja saber o valor elevado ao quadrado:  \n");
    scanf("%d",&v1);
    
    printf("O %d elevado ao quadrado eh: %d",v1,quadrado_num(v1));
    return 0;
}
