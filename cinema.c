#include <stdio.h>

int main() {
    int f, l;
    int i, j;

    char sala[20][25];

    char fileira;
    int lugar;

    scanf("%d %d", &f, &l);

    // inicia tudo vazio
    for (i = 0; i < f; i++) {

        for (j = 0; j < l; j++) {

            sala[i][j] = '-';
        }
    }

    // lê ingressos até EOF
    for (; scanf(" %c%d", &fileira, &lugar) != EOF; ) {

        // marca ocupado
        sala[fileira - 'A'][lugar - 1] = 'X';
    }

    // imprime números das colunas
    for (i = 1; i <= l; i++) {

        printf("%02d ", i);
    }

    printf("\n");

    // imprime mapa
    for (i = f - 1; i >= 0; i--) {

        printf("%c ", 'A' + i);

        for (j = 0; j < l; j++) {

            if (sala[i][j] == 'X') {
                printf("XX ");
            } else {
                printf("-- ");
            }
        }

        printf("\n");
    }

    return 0;
}