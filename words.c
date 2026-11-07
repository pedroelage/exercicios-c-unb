#include <stdio.h>

int main() {
    int n, k;
    char str[105];

    scanf("%d", &n);

    for (k = 0; k < n; k++) {
        scanf("%s", str);

        int ordenada = 1;
        int i = 0;

        while (str[i + 1] != '\0') {
            char c1 = str[i];
            char c2 = str[i + 1];

            // Converte c1 para minusculo se for maiusculo
            if (c1 >= 'A' && c1 <= 'Z') {
                c1 = c1 + 32;
            }

            // Converte c2 para minusculo se for maiusculo
            if (c2 >= 'A' && c2 <= 'Z') {
                c2 = c2 + 32;
            }

            // Ordem estritamente crescente: c1 deve ser menor que c2
            if (c1 >= c2) {
                ordenada = 0;
                break;
            }

            i++;
        }

        if (ordenada == 1) {
            printf("%s: O\n", str);
        } else {
            printf("%s: N\n", str);
        }
    }

    return 0;
}