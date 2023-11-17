#include<stdio.h>

void mudarNumero(int *valor){
     *valor = 10;
}

main(){
    int numero;
    mudarNumero(&numero);
    printf("imprimindo o valor de numero: %d", numero);
}