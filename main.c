#include <stdio.h>
#include "libprg/libprg.h"
#include <string.h>
#include "calculadora.h"
int main(void) {
   /*pilha_t pilha_t *p = criar_pilha();
    pop(p);
    push(p,3);
    push(p,5);
    push(p,7);
    push(p,5);
    push(p,7);
    push(p,7);
    push(p,5);
    push(p,7);
    return 0;*/
    char expressao[10];
    int indice;
    printf("escreva a expressao em formato polonesa: ");
    fgets(expressao,sizeof(expressao),stdin);
    indice = strcspn(expressao,"\n");
    expressao[indice] = 0;
    int resultado = notacao_polonesa_reversa(expressao);
    printf("resultado: %f",resultado);

}