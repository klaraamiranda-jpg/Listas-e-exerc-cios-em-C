#include<stdio.h>
main(){
	
	int n1, n2, n3, n4, temp;
	
	printf("Digite 4 numeros inteiros e positivos: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if(n1 > n2){ temp = n1; n1 = n2; n2 = temp;}
	if(n1 > n3){ temp = n1; n1 = n3; n3 = temp;}
	if(n1 > n4){ temp = n1; n1 = n4; n4 = temp;}
	
	if(n2 > n3){ temp = n2; n2 = n3; n3 = temp;}
	if(n2 > n4){ temp = n2; n2 = n4; n4 = temp;}
	
	if(n3 > n4){ temp = n3; n3 = n4; n4 = temp;}
	
	printf("Ordem crescente: %d %d %d %d\n",n1,n2,n3,n4);
	printf("Ordem decrescente: %d %d %d %d",n4,n3,n2,n1);
}
