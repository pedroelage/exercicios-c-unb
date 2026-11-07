#include <stdio.h>

int main() {
    int n, x;
    int i;

    int menor = 1000000;
    int segundo = 1000000;
    int terceiro = 1000000;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        scanf("%d", &x);

        if (x < menor) {

            terceiro = segundo;
            segundo = menor;
            menor = x;
        }

        else if (x < segundo) {

            terceiro = segundo;
            segundo = x;
        }

        else if (x < terceiro) {

            terceiro = x;
        }
    }

    printf("%d\n", segundo);
    printf("%d\n", terceiro);

    return 0;
}