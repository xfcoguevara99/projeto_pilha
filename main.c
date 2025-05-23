#include <stdio.h>
#include "libprg/libprg.h"
#include <string.h>
#include "calculadora.h"
int main(void) {
   no_t *lista;
   lista = create_no_list_enc(1);
   lista = add_element_to_list_enc(lista,2);
   lista = add_element_to_list_enc(lista,3);
   lista = add_element_to_list_enc(lista,4);
   lista = add_element_to_list_enc(lista,5);
   //testar funcao encontrar
   //no_t *encontrado = search_element_to_list_enc(lista,6);
   remove_element_to_list_enc(lista,1);









}