#include <stdio.h>
#include "libprg/libprg.h"
#include <string.h>
#include "calculadora.h"
int main(void) {
   lista_t  *lista;
   lista = create_list();
   add_element_to_list(lista,5);
   add_element_to_list(lista,3);
   add_element_to_list(lista,1);
   add_element_to_list(lista,0);
   search(lista,1);
   add_element_to_list(lista,7);
   add_element_to_list(lista,6);
   add_element_to_list(lista,8);
   add_element_to_list(lista,2);
   add_element_to_list(lista,8);
   add_element_to_list(lista,2);
   add_element_to_list(lista,5);
   remover(lista,1);
   add_element_to_list(lista,15);








}