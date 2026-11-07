#include <stdio.h>

int main() {
    int l, i, j;
    char texto[1000][1001];
    int tamanho[1000];

    int linha, coluna;
    int coluna_desejada;

    char comando;

    scanf("%d", &l);
    getchar();

    // lê as linhas do texto
    for (i = 0; i < l; i++) {

        scanf("%[^\n]", texto[i]);
        getchar();

        // calcula tamanho da linha
        tamanho[i] = 0;

        for (j = 0; texto[i][j] != '\0'; j++) {
            tamanho[i]++;
        }
    }

    // posição inicial do cursor
    scanf("%d %d", &linha, &coluna);

    coluna_desejada = coluna;

    getchar();

    // lê comandos até EOF
    for (; scanf("%c", &comando) != EOF; ) {

        getchar();

        // desce linha
        if (comando == 'j') {

            if (linha < l) {
                linha++;
            }
        }

        // sobe linha
        else if (comando == 'k') {

            if (linha > 1) {
                linha--;
            }
        }

        // ajusta coluna
        if (coluna_desejada <= tamanho[linha - 1]) {

            coluna = coluna_desejada;

        } else {

            coluna = tamanho[linha - 1];
        }

        // imprime resultado
        printf("%d %d %c\n",
               linha,
               coluna,
               texto[linha - 1][coluna - 1]);
    }

    return 0;
}