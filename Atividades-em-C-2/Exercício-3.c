#include<stdio.h>
float alt;

int main() {
  char nome[61];
  printf("Informe seu nome: ");
  scanf("%s",nome);
  printf("O nome informado foi: %s\n", nome);

  printf("Informe sua altura: ");
  scanf("%f", &alt);
  printf("A altura informada foi: %.2f\n", alt);

  float peso = (72.7 * alt) - 58;
  printf("%s, seu peso ideal é de %.3f", nome, peso);
  
  return 0;
}