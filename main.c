#include <stdio.h>
#include "libprg/libprg.h"
#include <string.h>
#include "calculadora.h"

int main(void) {
    no_d *arvore = criar_arvore(5);
    arvore = inserir_valor_arvore(arvore, 2);
    arvore = inserir_valor_arvore(arvore, 3);
    arvore = inserir_valor_arvore(arvore, 6);
}
