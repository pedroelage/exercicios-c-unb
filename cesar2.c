#include <stdio.h>

int main() {
    int n, i, j;
    char frase[1001];

    scanf("%d", &n);
    getchar();

    // percorre todas as mensagens
    for (i = 0; i < n; i++) {

        // lê a frase inteira
        scanf("%[^\n]", frase);
        getchar();

        // percorre caractere por caractere
        for (j = 0; frase[j] != '\0'; j++) {

            // letras de A até M
            if (frase[j] >= 'A' && frase[j] <= 'M') {
                frase[j] = frase[j] + 13;
            }

            // letras de N até Z
            else if (frase[j] >= 'N' && frase[j] <= 'Z') {
                frase[j] = frase[j] - 13;
            }

            // letras de a até m
            else if (frase[j] >= 'a' && frase[j] <= 'm') {
                frase[j] = frase[j] + 13;
            }

            // letras de n até z
            else if (frase[j] >= 'n' && frase[j] <= 'z') {
                frase[j] = frase[j] - 13;
            }
        }

        printf("%s\n", frase);
    }

    return 0;
}