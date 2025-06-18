#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100], str3[200];

    printf("Type your first string: ");
    fgets(str1, sizeof str1, stdin);

    printf("Now type your second: ");
    fgets(str2, sizeof str2, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';


    printf("Here's the interleaved string you generated: ");
    for(int i = 0; i < strlen(str1)+strlen(str2); ++i){
        if(i%2 == 0)
            printf("%c", str1[i/2]);
        else
            printf("%c", str2[i/2]);
    }

    printf("\n");
    return 0;
}