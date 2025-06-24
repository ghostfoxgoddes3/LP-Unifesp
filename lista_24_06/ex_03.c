#include <stdio.h>
#include <ctype.h>
#include <string.h>

int letter(char c){
    if(isalpha(c))
        return 1;
    else
        return 0;
}

int vowel(char c){
    // if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    if (strchr("aeiou", c)) //pesquisei na biblioteca
        return 1;
    else
        return 0;
}

int con(char c){
    if(isalpha(c)){
        if (strchr("aeiou", c)) 
            return 0;
     else
            return 1;
    }
    else
        return 0;
}

void extra(char c){
    if(letter(c) == 1){
        printf("%c é uma letra!\n", c);
        if(vowel(c) == 1)
            printf("%c é uma vogal!", c);
        else
            printf("%c é uma consoante!", c);
        }
    else
        printf("%c não é uma letra.", c);
    
    printf("\n");
}

int main(){
    extra('c');

    return 0;
}