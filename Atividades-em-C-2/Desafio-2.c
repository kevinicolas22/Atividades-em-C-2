#include <stdio.h>

float valorhora;
float hora;
float descontoIR;
float descontoINSS;

int main(void) {
  printf("Qual o valor da sua hora de trabalho: \n");
  scanf("%f", &valorhora);
  printf("Quantas horas você trabalhou neste mês: \n");
  scanf("%f", &hora);
  printf("Qual o seu desconto do IR: \n");
  scanf("%f", &descontoIR);
  printf("Qual o seu desconto do INSS: \n");
  scanf("%f", &descontoINSS);

  float bruto = valorhora * hora;
  printf("Salário Bruto: R$ %.2f\n", bruto);
  float IR = (descontoIR / 100) * bruto;
  printf("Desconto do IR: R$ %.2f\n", IR);
  float INSS = (descontoINSS / 100) * bruto;
  printf("Desconto do INSS: R$ %.2f\n", INSS);
  float liquido = bruto - (IR + INSS);
  printf("Salário Líquido: R$ %.2f\n", liquido);
}