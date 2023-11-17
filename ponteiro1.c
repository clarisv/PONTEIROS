#include<stdio.h>

main(){

//declaracao de variavel
int num;

//declaracao ponteiro
int *p;

/*  p = acessando o conteudo do ponteiro, 
   &p = acessando o end de memoria do ponteiro
   *p = acessando o conteudo da variavel q o ponteiro aponta */


num = 20;

p = &num;

*p = 30;

printf("valor de num: %d", num);
printf("conteudo de p: %d", *p);

}