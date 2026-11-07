#include <stdio.h>

int ehPrimo(int n){
    if(n < 2) return 0;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main(){

    int T;
    scanf("%d", &T);

    while(T--){

        int n;
        scanf("%d", &n);

        int ok = 1;

        while(n > 0){

            if(!ehPrimo(n)){
                ok = 0;
                break;
            }

            n /= 10;
        }

        if(ok)
            printf("S\n");
        else
            printf("N\n");
    }

    return 0;
}