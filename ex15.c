#include <stdio.h>

int main(){
  float t_cel, t_fah;
  
  printf("Qual a temperatura local em Fahrenheit?");
  scanf("%i",&t_fah);

  t_cel = 5.0/9*(t_fah - 32);
  
  printf("Temperatura local em graus Celsius: %.2f\n", t_cel);
}
