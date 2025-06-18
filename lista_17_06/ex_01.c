#include <stdio.h>
#include <string.h>

int main(){
    char phrase[100];

    printf("Enter your phrase: ");
    fgets(phrase, sizeof phrase, stdin);

    for(int i = 0; i<strlen(phrase); ++i){
        printf("%c", phrase[i]);
        if(phrase[i] == ' '){
            phrase[i+1] -= 32;
        }
    }

    printf("\n");
    return 0;
}
