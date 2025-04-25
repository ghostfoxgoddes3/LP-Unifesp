#include <stdio.h>

int main(){
  float salary, readjustment;
  
  printf("Qual o salário atual do funcionário?");
  scanf("%f",&salary);
  printf("Qual o percentual de reajuste?");
  scanf("%f",&readjustment);

  salary = salary*readjustment/100
  
  printf("Salário reajustado para o ano corrente: %.2f\n", salary);
}
