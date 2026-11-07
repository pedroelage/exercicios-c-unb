#include <stdio.h>

int main() {
    int n, i, j;
    int mapa[505][505];
    int soma_coluna[505];

    scanf("%d", &n);

    // Zerar o vetor de somas das colunas
    for (j = 0; j < n; j++) {
        soma_coluna[j] = 0;
    }

    // Le a matriz e vai somando os valores de cada coluna
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mapa[i][j]);
            soma_coluna[j] += mapa[i][j];
        }
    }

    int maior_soma = 0;
    int melhor_coluna = 0; // 0 significa que nenhuma area desmatada foi encontrada

    // Procura a coluna com maior quantidade de 1s
    for (j = 0; j < n; j++) {
        if (soma_coluna[j] > maior_soma) {
            maior_soma = soma_coluna[j];
            melhor_coluna = j + 1; // As colunas sao contadas a partir de 1
        }
    }

    printf("%d\n", melhor_coluna);

    return 0;
}