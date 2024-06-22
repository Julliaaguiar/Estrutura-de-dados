#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

int main(int argc, char* argv[]){

    No* raiz = NULL;
    inserir_no(&raiz, 3);
    inserir_no(&raiz, 6);
    inserir_no(&raiz, 4);
    inserir_no(&raiz, 5);
    inserir_no(&raiz, 7);
    inserir_no(&raiz, 8);
    inserir_no(&raiz, 9);
   
 printf("\nEm pre-ordem: ");
    inOrder(raiz);
 printf("\nEm pos-ordem: ");
     postOrder(raiz);

 No* buscar = buscar_no(raiz, 5); 
    if (buscar != NULL){ 
        printf("\n\nValor encontrado: %d \n", buscar->valor); 
    } else { 
        printf("\n\nValor nao encontrado. \n");
    }

    No* remover = remover_no(&raiz, buscar->valor); 
   
    printf("Em ordem apos remocao: ");
    inOrder(raiz);

    exit(0);
}