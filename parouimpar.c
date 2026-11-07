#include <stdio.h>

int main() {
    int E, J1, J2;
    int vencedorAB, vencedorCD;

    // Jogo A x B
    scanf("%d %d %d", &E, &J1, &J2);

    if ((J1 + J2) % 2 == E)
        vencedorAB = 0; // A ganhou
    else
        vencedorAB = 1; // B ganhou

    // Jogo C x D
    scanf("%d %d %d", &E, &J1, &J2);

    if ((J1 + J2) % 2 == E)
        vencedorCD = 2; // C ganhou
    else
        vencedorCD = 3; // D ganhou

    // Final
    scanf("%d %d %d", &E, &J1, &J2);

    if ((J1 + J2) % 2 == E) {
        if (vencedorAB == 0)
            printf("A\n");
        else
            printf("B\n");
    } else {
        if (vencedorCD == 2)
            printf("C\n");
        else
            printf("D\n");
    }

    return 0;
}