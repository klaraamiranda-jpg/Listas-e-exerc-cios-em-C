#include<stdio.h>
#include<stdlib.h>

int main() {
   
    int h,hora_extra,hora_falta,horas_reais,faltas_reais;

    printf("Digite a quantidade de horas extras em minutos que voce tem: ");
    scanf("%d",&hora_extra);
    printf("Digite a quantidade de horas falta em minutos que voce tem: ");
    scanf("%d",&hora_falta);
   
    h = hora_extra - ((2.0 / 3.0) * hora_falta);
    horas_reais = hora_extra / 60.0;
    faltas_reais = hora_falta / 60.0;
   
   	if( h <= 600){
    printf("Voce tem direito ao premio no valor de R$ 100 reais!!! \n");
    printf("Voce tem %d em horas extras e %d em horas falta!",horas_reais,faltas_reais);
}	
	else if ( h  <= 1200 ){
	printf("Voce tem direito ao premio no valor de R$ 200 reais!!! \n");
    printf("Voce tem %d em horas extras e %d em horas falta!",horas_reais,faltas_reais);
}   
	else if ( h >= 1201 && h <= 1800 ){
    printf("Voce tem direito ao premio no valor de R$ 300 reais!!! \n");
    printf("Voce tem %d em horas extras e %d em horas falta!",horas_reais,faltas_reais);
}   
	else if ( h >= 1801 && h <= 2400 ){
    printf("Voce tem direito ao premio no valor de R$ 400 reais!!! \n");
    printf("Voce tem %d em horas extras e %d em horas falta!",horas_reais,faltas_reais);
}   
	else {
    printf("Voce tem direito ao premio no valor de R$ 500 reais!!! \n");
    printf("Voce tem %d em horas extras e %d em horas falta!!\n",horas_reais,faltas_reais);
}  
    system("PAUSE");
    return 0;
}
