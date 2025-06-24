#include <stdio.h>

void gauss(int x){
    if(x%2 == 0)
        printf("%d", (x+1)*(x/2));
    else
        printf("%d", (x+1)*(x/2)+(x/2 +1));
}

void res(int x){
    int sum = 0;
    for(int i = 0; i<=x; ++i){
        sum += i;
    }
    printf("%d", sum);
}

int main(){
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    printf("A soma de todos os inteiros positivos até %d é ", x);
    gauss(x);

    //resolução alternativa 
    //res(x);

    printf(".\n");
    return 0;
}
