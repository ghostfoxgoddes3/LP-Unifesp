#include <stdio.h>

int main(){
  int a,m,d,total;

  printf("Digite sua idade em anos, meses e dias.\n");
  printf("Anos: ");
  scanf("%i",&a);
  printf("Meses: ");
  scanf("%i",&m);
  printf("Dias: ");
  scanf("%i",&d);
  total = a*365 + m*30 + d;
  printf("Total de dias: %i\n",total);
}