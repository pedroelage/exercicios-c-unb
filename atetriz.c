#include <stdio.h>

int main() {

    int n;
    int m[15][15];

    int i, j;
    int cheio;
    int existe;

    int primeira = 1;

    scanf("%d", &n);

    // lê matriz
    for (i = 0; i < n; i++) {

        for (j = 0; j < n; j++) {

            scanf("%d", &m[i][j]);
        }
    }

    for (;;) {

        // linha em branco entre blocos
        if (primeira == 0) {
            printf("\n");
        }

        primeira = 0;

        // PASSO 1
        // remove linhas cheias
        existe = 0;

        for (i = 0; i < n; i++) {

            cheio = 1;

            for (j = 0; j < n; j++) {

                if (m[i][j] == 0) {
                    cheio = 0;
                }
            }

            if (cheio == 1) {

                existe = 1;

                for (j = 0; j < n; j++) {
                    m[i][j] = 0;
                }
            }
        }

        // PASSO 2
        // imprime matriz
        for (i = 0; i < n; i++) {

            for (j = 0; j < n; j++) {

                printf("%d", m[i][j]);

                if (j < n - 1) {
                    printf(" ");
                }
            }

            printf("\n");
        }

        printf("\n");

        // PASSO 3
        // gravidade
        for (j = 0; j < n; j++) {

            int qtd = 0;

            // conta 1s
            for (i = 0; i < n; i++) {

                if (m[i][j] == 1) {
                    qtd++;
                }
            }

            // zera coluna
            for (i = 0; i < n; i++) {
                m[i][j] = 0;
            }

            // coloca embaixo
            for (i = n - qtd; i < n; i++) {
                m[i][j] = 1;
            }
        }

        // PASSO 4
        // imprime matriz
        for (i = 0; i < n; i++) {

            for (j = 0; j < n; j++) {

                printf("%d", m[i][j]);

                if (j < n - 1) {
                    printf(" ");
                }
            }

            printf("\n");
        }

        // verifica se ainda existe linha cheia
        existe = 0;

        for (i = 0; i < n; i++) {

            cheio = 1;

            for (j = 0; j < n; j++) {

                if (m[i][j] == 0) {
                    cheio = 0;
                }
            }

            if (cheio == 1) {
                existe = 1;
            }
        }

        // termina
        if (existe == 0) {
            break;
        }
    }

    return 0;
}