#include <stdio.h>

int main(){
  int total, brancos, nulos, validos; 
  float b, n, v;
  
  printf("Digite a quantidade de votos nulos:");
  scanf("%i",&nulos);
  printf("Digite a quantidade de votos brancos:");
  scanf("%i",&brancos);
  printf("Digite a quantidade de votos válidos:");
  scanf("%i",&validos);
  total = brancos + nulos + validos;

  b = brancos*100/total;
  n = nulos*100/total;
  v = validos*100/total;
  
  printf("Participação dos votos em branco: %.2f%%\n", b);
  printf("Participação dos votos nulos: %.2f%%\n", n);
  printf("Participação dos votos válidos: %.2f%%\n", v);
}
