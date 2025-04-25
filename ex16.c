#include <stdio.h>

int main(){
  float n1, n2, n3, notafinal;
  
  printf("Digite sua nota na p1:");
  scanf("%f",&n1);
  printf("Digite sua nota na p2:");
  scanf("%f",&n2);
  printf("Digite sua nota na p3:");
  scanf("%f",&n3);

  notafinal = (n1*2 + n2*3 + n3*5)/10
  
  printf("Sua média final é %.2f\n", notafinal);
}
