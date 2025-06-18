#include <stdio.h>
#include <string.h>

void sub(char *A, char *B, char *C) {
    char result[200] = "";
    char *current = A;
    char *pos;
    int size_B = strlen(B);

    while ((pos = strstr(current, B)) != NULL) {
        strncat(result, current, pos - current);
        strcat(result, C);
        current = pos + size_B;
    }

    strcat(result, current);

    strcpy(A, result);
}

void read(char *A, int size, char name) {
    printf("Type the string %c (main): ", name);
    fgets(A, size, stdin);
    A[strcspn(A, "\n")] = '\0';
}

int main() {
    char A[200], B[100], C[100];

    read(A, sizeof A, 'A');
    read(B, sizeof B, 'B');
    read(C, sizeof C, 'C');

    sub(A, B, C);

    printf("%s\n", A);
    return 0;
}
