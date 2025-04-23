#include <stdio.h>

int main(){
  int worktime, salary; 
  printf("Qual seu rendimento por hora?");
  scanf("%i",&salary);
  printf("Quantas horas você trabalha por mês?");
  scanf("%i",&worktime);
  printf("Rendimento mensal: %i\n", worktime*salary);
}