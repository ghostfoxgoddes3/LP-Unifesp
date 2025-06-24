#include <stdio.h>
void euclides(int a, int b){
    int max, min, resto, mdc = 1;
    
    if(a > b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    
    while (min != 0) {
        resto = max % min;
        max = min;
        min = resto;
    }

    mdc = max;

    printf("O máximo divisor comum entre %d e %d é %d.\n", a, b, mdc);
}

int main(){
    euclides(5, 7);
    euclides(84, 96);
    euclides(20,40);

    return 0;
}