#include<stdio.h>
main(){
	
	int i,n;
	printf("Digite um numero o qual deseja saber a tabuada de multiplicacao: ");
	scanf("%d",&n);
	printf("Tabuada do %d: \n",n);
	
	for(i=1;i<=10;i++){
		printf("%d * %d = %d\n",n,i,n*i);
		}	
	}	
