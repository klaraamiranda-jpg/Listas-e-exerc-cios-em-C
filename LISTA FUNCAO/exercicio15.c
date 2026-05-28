#include <stdio.h>

float calcularMedia(float n1, float n2, float n3){
	float m;
	m=(n1 + n2 + n3) / 3.0;
	return m;
}
void verificarSituacao(float media){
	if(media>=6){
		printf("Aluno APROVADO! Media:%.2f\n",media);
	}else{
		printf("Aluno REPROVADO! Media:%.2f\n",media);
	}
}
int main() {
    float nota1, nota2, nota3, m_final;

    printf("Digite as 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    m_final = calcularMedia(nota1, nota2, nota3);
    verificarSituacao(m_final);

    return 0;
}

