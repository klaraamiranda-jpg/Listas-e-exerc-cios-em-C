#include<stdio.h>
#include<stdlib.h>

int main() {
     
    int num_dependentes;
    float salario_min,h_trab,hextra_trab,salario_mes,valor_hora,
	valor_dependentes,total_horas_extras,valor_hora_extra,irrf,
	salario_bruto,salario_liquido,gratificacao;
   
    // 1. ENTRADA DE DADOS 
    printf("Digite o valor do salario minimo: ");
    scanf("%f",&salario_min);
    printf("Digite a quantidade de horas normais trabalhadas: ");
    scanf("%f",&h_trab);
    printf("Digite o numero de dependentes: ");
    scanf("%d",&num_dependentes);
   
    // 2. PROCESSAMENTO 
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f",&hextra_trab);
    
    // Descobre o valor de 1 hora normal (1/5 do salário mínimo)
    valor_hora = (1.0/5.0) * salario_min;
    
    // Calcula o salário base do mês (horas trabalhadas * valor da hora)
    salario_mes = h_trab*valor_hora;
    
    // Multiplica o bônus de R$ 32,00 pela quantidade de dependentes
    valor_dependentes = num_dependentes*32.00;
    
    // A hora extra vale o valor da hora normal + 50% de acréscimo (x 1.50)
    valor_hora_extra = valor_hora * 1.50;
    
    // Descobre o total de dinheiro ganho apenas com as horas extras
      total_horas_extras = valor_hora_extra * hextra_trab;
      
    // O Salário Bruto e imprime o total
    salario_bruto = salario_mes + valor_dependentes + total_horas_extras;
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
   
    // 4. DECISÕES DE IMPOSTO DE RENDA (IRRF)
    if (salario_bruto < 200){
        irrf = 0.0;
        printf("Funcionario isento do IR!");//Isento
       
    }  else if (salario_bruto<= 500){
             irrf = salario_bruto * 0.10;
             printf("Funcionario precisa declarar 10%% do IR! O valor ficara: %.2f\n",irrf);//10% de imposto
             
    }  else {
              irrf = salario_bruto * 0.20;
               printf("Funcionario precisa declarar 20%% do IR! O valor ficara: %.2f\n",irrf);//20% de imposto
    }
    
    // O Salário Líquido e imprime após os descontos
    salario_liquido = salario_bruto - irrf;
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
   
    // 5. DECISÕES DE GRATIFICAÇÃO
    if (salario_liquido <= 350){
        gratificacao = salario_liquido + 100;
        printf("Funcionario recebe gratificacao de 100 reais!! Total de %.2f\n",gratificacao);//Ganha 100
    }   else{
        gratificacao = salario_liquido + 50;
        printf("Funcionario recebe gratificacao de 50 reais!! Total de %.2f\n",gratificacao);//Ganha 50
    }
   
    // 6. SAÍDA FINAL
    printf("\n--------------RESUMO DO CONTRACHEQUE-------------------------\n");
    printf("Salario Bruto: R$ %.2f\n",salario_bruto);
    printf("Desconto IR (Imposto de Renda): R$ %.2f\n",irrf);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    printf("Total a Receber (com gratificacao): R$ %.2f\n",gratificacao);
    printf("--------------------------------------------------------------\n\n");
   
       system("PAUSE");
       return 0;
}
