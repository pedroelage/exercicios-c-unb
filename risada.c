#include <stdio.h>

int main() {
    char risada[61];
    char vogais[61];
    int i, j = 0, tamanho = 0;
    int engraçada = 1;

    scanf("%s", risada);

    // pega apenas as vogais
    for (i = 0; risada[i] != '\0'; i++) {

        if (risada[i] == 'a' ||
            risada[i] == 'e' ||
            risada[i] == 'i' ||
            risada[i] == 'o' ||
            risada[i] == 'u') {

            vogais[j] = risada[i];
            j++;
        }
    }

    vogais[j] = '\0';
    tamanho = j;

    // verifica se não existe vogal
    if (tamanho == 0) {
        printf("Valor invalido!\n");
        return 0;
    }

    // verifica se as vogais formam um palíndromo
    for (i = 0; i < tamanho / 2; i++) {

        if (vogais[i] != vogais[tamanho - 1 - i]) {
            engraçada = 0;
        }
    }

    if (engraçada == 1) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}