#include <stdio.h>

int main() {
    char frase[10001];
    char antiga[41];
    char nova[41];

    int i, j, k;
    int igual;
    int tam_antiga = 0;
    int tam_nova = 0;

    // lê a frase
    scanf("%[^\n]", frase);

    getchar();

    // lê as palavras
    scanf("%s", antiga);
    scanf("%s", nova);

    // tamanho da palavra antiga
    for (i = 0; antiga[i] != '\0'; i++) {
        tam_antiga++;
    }

    // tamanho da palavra nova
    for (i = 0; nova[i] != '\0'; i++) {
        tam_nova++;
    }

    // percorre a frase
    for (i = 0; frase[i] != '\0'; i++) {

        igual = 1;

        // verifica se encontrou a palavra antiga
        for (j = 0; j < tam_antiga; j++) {

            if (frase[i + j] != antiga[j]) {
                igual = 0;
            }
        }

        // se encontrou
        if (igual == 1) {

            // imprime a palavra nova
            for (k = 0; k < tam_nova; k++) {
                printf("%c", nova[k]);
            }

            // pula a palavra antiga
            i = i + tam_antiga - 1;

        } else {

            // imprime caractere normal
            printf("%c", frase[i]);
        }
    }

    printf("\n");

    return 0;
}