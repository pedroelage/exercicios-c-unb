#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Matriz global para evitar estouro de pilha
char seq1[100005][85];

// Funcao de comparacao para o qsort usar strcmp
int compara(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    int n, m, i;

    if (scanf("%d %d", &n, &m) != 2) return 0;

    // Le as N palavras da primeira sequencia
    for (i = 0; i < n; i++) {
        scanf("%s", seq1[i]);
    }

    // Ordena as N palavras em ordem alfabetica
    qsort(seq1, n, sizeof(seq1[0]), compara);

    char palavra[85];
    int achou = 0;

    // Le as M palavras da segunda sequencia
    for (i = 0; i < m; i++) {
        scanf("%s", palavra);

        if (achou == 1) continue; // Continua lendo para consumir toda a entrada

        // Busca binaria usando bsearch da stdlib/string
        if (bsearch(palavra, seq1, n, sizeof(seq1[0]), compara) != NULL) {
            achou = 1;
        }
    }

    printf("%d\n", achou);

    return 0;
}