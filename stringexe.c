#include <stdio.h>

int main() {
    int n, m;
    int i, j, k;
    int igual;

    char s[1000][81];
    char p[81];

    scanf("%d %d", &n, &m);

    // lê sequência S
    for (i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }

    // lê palavras de P
    for (i = 0; i < m; i++) {

        scanf("%s", p);

        // compara com todas de S
        for (j = 0; j < n; j++) {

            igual = 1;

            for (k = 0; s[j][k] != '\0' || p[k] != '\0'; k++) {

                if (s[j][k] != p[k]) {
                    igual = 0;
                }
            }

            if (igual == 1) {
                printf("1\n");
                return 0;
            }
        }
    }

    printf("0\n");

    return 0;
}