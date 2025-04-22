//
// Created by aluno on 22/04/25.
//

#include "calculadora.h"

#include <ctype.h>
#include <stdlib.h>

#include "libprg/libprg.h"
#include "string.h"

int notacao_polonesa_reversa(char *expressao) {
    pilha_t *pilha = criar_pilha();
    char *token =strtok(expressao," ");
    if (isdigit(token[0])){
        push(pilha,atoi(token));
    }
}