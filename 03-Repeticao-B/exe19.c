#include<stdio.h>
main(){
	
	int i, n1, n2, maior, menor;
	
	printf("Digite um numero: ");
	scanf("%d",&n1);
	printf("Digite um numero: ");
	scanf("%d",&n2);
	
	if(n1 > n2){
		maior = n1;
		menor = n2;
	} else{
		maior = n2;
		menor = n1;
	}
	
	for(i = menor; i <= maior; i++){
		if(i % 3 == 0){
			printf("%d ",i);
		}
	}
}
	
