#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

 	//Captura e organiza o tempo
    time_t tempo_bruto = time(NULL);
    struct tm *info_tempo = localtime(&tempo_bruto);

    //Pegando as partes isoladas da data:
    int dia = info_tempo->tm_mday;
    int mes = info_tempo->tm_mon; 
    int ano = info_tempo->tm_year + 1900;
    
    printf("Hoje e dia %d",dia);
    
	switch (mes) {
    case 0:
        printf(" de Janeiro de ");
        break;
    case 1:
        printf(" de Fevereiro de ");
        break;
    case 2:
        printf(" de Marco de ");
        break;
    case 3:
        printf(" de Abril de ");
        break;
    case 4:
        printf(" de Maio de ");
        break;
    case 5:
        printf(" de Junho de ");
        break;
    case 6:
        printf(" de Julho de ");
        break;
    case 7:
        printf(" de Agosto de ");
        break;
    case 8:
        printf(" de Setembro de ");
        break;
    case 9:
        printf(" de Outubro de ");
        break;
    case 10:
        printf(" de Novembro de ");
        break;
    case 11:
        printf(" de Dezembro de ");
        break;
}
	printf("%d\n",ano);
	
    system("PAUSE");
     return 0;
 }
