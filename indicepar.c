#include <stdio.h>

int main() {
    int n, i, x;
    int pos_pares[10000], pos_impares[10000];
    int cp = 0, ci = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x % 2 == 0) {
            pos_pares[cp] = i;
            cp++;
        } else {
            pos_impares[ci] = i;
            ci++;
        }
    }

    // imprime os indices dos pares
    for (i = 0; i < cp; i++) {
        if (i == 0) {
            printf("%d", pos_pares[i]);
        } else {
            printf(" %d", pos_pares[i]);
        }
    }
    printf("\n");

    // imprime os indices dos impares
    for (i = 0; i < ci; i++) {
        if (i == 0) {
            printf("%d", pos_impares[i]);
        } else {
            printf(" %d", pos_impares[i]);
        }
    }
    printf("\n");

    return 0;
}