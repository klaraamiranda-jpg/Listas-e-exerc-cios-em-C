#include<stdio.h>

float graus(float c){
	float f;
	f=c*1.8+32;
	return f;
}
int main()
{	float celsius;
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f",&celsius);
	printf("Temperatura em Fahrenheit:%.2f\n",graus(celsius));
	return 0;
}
