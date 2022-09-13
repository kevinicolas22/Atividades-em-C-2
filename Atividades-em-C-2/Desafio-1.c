#include <stdio.h>

float fahrenheit; 

int main(void) {

  printf("Informe a temperatura em Fahrenheit: ");
  scanf("%f", &fahrenheit);

  float celsius = 5 * ((fahrenheit - 32) / 9);
  printf("A temperatura em graus celsius é de %.2f °C", celsius);
}
