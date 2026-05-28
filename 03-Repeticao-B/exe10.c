#include<stdio.h>
main(){
	
	int i=1,n;
	printf("Digite um numero o qual deseja saber a tabuada de multiplicacao: ");
	scanf("%d",&n);
	printf("Tabuada do %d: \n",n);
	
	while(i<=10){
		printf("%d * %d = %d\n",n,i,n*i);
		i++;	
	}		
}	
