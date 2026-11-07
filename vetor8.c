#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    int vet[n];
    int soma = 0;

    // Lê o vetor e soma os elementos
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    // Calcula a média
    int media = soma / n;

    int encontrou = 0;

    // Mostra os elementos maiores que a média
    for(int i = 0; i < n; i++){

        if(vet[i] > media){
            printf("%d ", vet[i]);
            encontrou = 1;
        }

    }

    // Caso não exista nenhum
    if(encontrou == 0){
        printf("0");
    }

    return 0;
}