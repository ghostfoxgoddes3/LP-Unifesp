#include <stdio.h>

void triangle(int t1, int t2, int t3){
    if(t1 >= t2+t3 || t2 >= t1+t3 || t3 >= t1+t2)
        printf("Esses lados não formam um triângulo.");
    else if(t1 == t2 && t2 == t3)
        printf("Trata-se de um triângulo equilátero.");
    else if(t1 != t2 && t2 != t3 && t1 != t3)
        printf("Trata-se de um triângulo escaleno.");
    else
        printf("Trata-se de um triângulo isósceles.");
}

int main(){
    int t1, t2, t3;

    printf("Insira o comprimento da primeira reta: ");
    scanf("%d", &t1);
    printf("Insira o comprimento da segunda reta: ");
    scanf("%d", &t2);
    printf("Insira o comprimento da terceira reta: ");
    scanf("%d", &t3);

    triangle(t1, t2, t3);
    printf("\n");

    return 0;
}