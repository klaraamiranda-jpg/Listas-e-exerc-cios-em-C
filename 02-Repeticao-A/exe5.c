#include<stdio.h>
main(){
	
	int i, n;
	long long f1 = 0, f2 = 1, fn = 0;
	long long fat=1;
	
	printf("Digite um numero inteiro e positivo: ");
	scanf("%d",&n);
	
	if(n == 0){
		fn=0;
	} else if(n == 1) {
		fn = 1;
	}else {
		for(i = 2; i <= n; i++){
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
		}
	}
	
	for(i =1; i <=n; i++){
		fat *= i;
	}
	
	printf("Termo %d da sequencia de FB: %d\n",n,fn);
	printf("Fatorial de %d: %d\n",n,fat);
}
