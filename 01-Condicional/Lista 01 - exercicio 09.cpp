#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 

main(){
	
	setlocale(LC_ALL,"Portuguese");
	float preco,codigo_origem;
	
	printf("Por favor, digite o preço do produto R$: ");
	scanf("%f",&preco);
	printf("Por favor, digite o codigo de origem do produto: ");
	scanf("%f",&codigo_origem);
	
	if (codigo_origem == 1) {
   	printf("Procedência do produto: Região Sul\n"); 	
} 	else if (codigo_origem == 2) {
   	printf("Procedência do produto: Região Norte\n");
}	else if (codigo_origem == 3) {
   	printf("Procedência do produto: Região Leste\n");
}	else if (codigo_origem == 4) {
   	printf("Procedência do produto: Região Oeste\n");
}	else if (codigo_origem == 5 || codigo_origem == 6 ) {
   	printf("Procedência do produto: Região Nordeste\n");
} 	else if (codigo_origem == 7 || codigo_origem == 8 || codigo_origem == 9) {
   	printf("Procedência do produto: Região Sudeste\n");
}	else if (codigo_origem >=10 && codigo_origem <= 20) {
    printf("Procedência do produto: Região Centro-Oeste\n");
}	else if (codigo_origem >= 21 && codigo_origem <= 30) {
    printf("Procedência do produto: Região Nordeste\n");
}	else{
	printf("Código Inválido!\n");
}										
	system("PAUSE");
	return 0;
}
