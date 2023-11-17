#include<stdio.h>

main(){

//declaracao de ponteiro

int numero = 10;

//declaracao de ponteiro
//e uma variavel que armazena a referencia do endereco de outra memoria, ou seja, 
//armazena o endereço de outra variavel

int *x = NULL;

//iniciar ponteiro

x = &numero;

//vizualizacao dos enderecos de memoria da variavel
printf("endereco de memoria do numero: %d", &numero);

//visualizacao dos enderecos de memoria do ponteiro
printf("endereco de memoria do ponteiro: %d", &x);

//visualizacao do valor da variavel
printf("valor da variavel: %d", x);






}