#include <stdio.h>

int main() {
    char nome[205];
    int tam = 0;
    int inicio_ultimo = 0;
    int i;

    scanf("%[^\n]", nome);

    // Descobre o tamanho e a posicao do ultimo sobrenome
    while (nome[tam] != '\0') {
        if (nome[tam] == ' ') {
            inicio_ultimo = tam + 1;
        }
        tam++;
    }

    // Imprime o primeiro nome em minusculas
    i = 0;
    while (nome[i] != ' ') {
        char c = nome[i];
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        printf("%c", c);
        i++;
    }

    printf(".");

    // Imprime o ultimo sobrenome em minusculas
    i = inicio_ultimo;
    while (i < tam) {
        char c = nome[i];
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        printf("%c", c);
        i++;
    }

    printf("@unb.br\n");

    return 0;
}