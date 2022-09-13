#include <stdio.h>

int num1;
int num2;
int num3;

int main(void) {

  printf("----------CONTAS---------\n");

  printf("Escolha dois números para subtrair:\n");
  printf("Digite o 1º número:\n");
  scanf("%d", &num1);
  printf("Digite o 2º número:\n");
  scanf("%d", &num2);

  int sub = 0;
  sub = num1 - num2;
  printf("O resultado da subtração é %d\n", sub);
  
  printf("Agora escolha outro número para multiplicar por %d\n", sub);
  printf("Digite o 3º número:\n");
  scanf("%d", &num3);

  int mut = 0;
  mut = sub * num3;
  printf("Ótimo! A sua resposta é %d", mut);

  printf(". Fim do programa...\n");
}