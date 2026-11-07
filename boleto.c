#include <stdio.h>

int main() {
    int num;
    int soma = 0;
    int peso = 2;
    int digito, resultado;
    int resto, dv;

    scanf("%d", &num);

    while (num > 0) {
        digito = num % 10;

        resultado = digito * peso;

        // Soma os algarismos do resultado
        soma += resultado / 10 + resultado % 10;

        num /= 10;

        if (peso == 2)
            peso = 1;
        else
            peso = 2;
    }

    resto = soma % 10;

    if (resto == 0)
        dv = 0;
    else
        dv = 10 - resto;

    printf("%d\n", dv);

    return 0;
}