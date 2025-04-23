#include <stdio.h>

int main(){
  int lado, area;
  printf("Lado do quadrado: ");
  scanf("%i",&lado);
  area = lado*lado;
  printf("Dobro da area: %i\n",area*2);
}