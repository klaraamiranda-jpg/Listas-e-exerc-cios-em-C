#include <stdio.h>

float media(float n1, float n2, float n3) {
	 return((n1+n2+n3)/3);
		
	}
int main() {
    float v1,v2,v3;
    printf("Digite um num1: \n");
    scanf("%f",&v1);
    printf("Digite um num2: \n");
    scanf("%f",&v2);
     printf("Digite um num3: \n");
    scanf("%f",&v3);
    
    printf("A media eh: %.2f",media(v1,v2,v3));
    return 0;
}
