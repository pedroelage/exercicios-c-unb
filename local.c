#include <stdio.h>

// Funcao auxiliar para saber se o caractere eh uma letra
int eh_letra(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}

int main() {
    char frase[10005];
    char busca[45];
    char troca[45];
    char c;
    int i = 0;

    // Le a frase inteira ate a quebra de linha
    while (scanf("%c", &c) == 1 && c != '\n' && c != '\r') {
        frase[i] = c;
        i++;
    }
    frase[i] = '\0';

    // Le as duas palavras que vem nas linhas seguintes
    scanf("%s", busca);
    scanf("%s", troca);

    // Tamanho da palavra buscada
    int tam_busca = 0;
    while (busca[tam_busca] != '\0') {
        tam_busca++;
    }

    i = 0;
    while (frase[i] != '\0') {
        // O inicio de palavra exige que o caractere anterior NAO seja letra
        int eh_inicio = (i == 0 || !eh_letra(frase[i - 1]));

        if (eh_inicio) {
            int casou = 1;
            for (int j = 0; j < tam_busca; j++) {
                if (frase[i + j] != busca[j]) {
                    casou = 0;
                    break;
                }
            }

            // O fim de palavra exige que o proximo caractere NAO seja letra
            int eh_fim = !eh_letra(frase[i + tam_busca]);

            if (casou && eh_fim) {
                printf("%s", troca);
                i += tam_busca;
                continue;
            }
        }

        printf("%c", frase[i]);
        i++;
    }
    printf("\n");

    return 0;
}