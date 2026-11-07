#include <stdio.h>

int main(){

    int R;
    int dia = 1;

    // lê até EOF
    while(scanf("%d", &R) != EOF){

        int codigo, nota;
        int melhorCodigo = 0;
        int maiorNota = -1;

        for(int i = 0; i < R; i++){

            scanf("%d %d", &codigo, &nota);

            if(nota > maiorNota){
                maiorNota = nota;
                melhorCodigo = codigo;
            }
            else if(nota == maiorNota && codigo < melhorCodigo){
                melhorCodigo = codigo;
            }
        }

        printf("Dia %d\n", dia);
        printf("%d\n\n", melhorCodigo);

        dia++;
    }

    return 0;
}