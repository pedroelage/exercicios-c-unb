#include <stdio.h>

int main() {
    unsigned long long int cpf;

    scanf("%llu", &cpf);

   
    int d11 = cpf % 10;
    int d10 = (cpf / 10) % 10;

    
    unsigned long long int temp = cpf / 100; 
    int soma = 0;
    int peso = 2;

    while (temp > 0) {
        int dig = temp % 10;
        soma += dig * peso;
        peso++;
        temp /= 10;
    }

    int resto = soma % 11;
    int dv1 = 11 - resto;
    if (dv1 >= 10) dv1 = 0;

    
    temp = cpf / 10;
    soma = 0;
    peso = 2;

    while (temp > 0) {
        int dig = temp % 10;
        soma += dig * peso;
        peso++;
        temp /= 10;
    }

    int dv2 = 11 - (soma % 11);
    if (dv2 >= 10) dv2 = 0;

   
    if (dv1 == d10 && dv2 == d11) {
        printf("valido\n");
    } else {
        printf("invalido\n");
    }

    return 0;
}