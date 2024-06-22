#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

No* no(int valor){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->no_esquerda = NULL;
    no->no_direita = NULL;
    return no;
}

void inserir_no(No** raiz, int valor){

    if(*raiz == NULL){
        *raiz = no(valor);
    }
    else{
        if((*raiz)->valor >= valor){
            inserir_no(&(*raiz)->no_esquerda, valor);
        }
        else if((*raiz)->valor < valor){
            inserir_no(&(*raiz)->no_direita, valor);
        }
    }

}

void inOrder(No* raiz){
    if(raiz != NULL){
       inOrder(raiz->no_esquerda);
        printf("%d ", raiz->valor);
       inOrder(raiz->no_direita);
    }
}
void preOrder(No* raiz){
    if(raiz != NULL){ 
        printf("%d ", raiz->valor); 
        preOrder(raiz->no_esquerda); 
        preOrder(raiz->no_direita); 
    }
}

void postOrder(No* raiz){
    if(raiz != NULL){
        postOrder(raiz->no_esquerda); 
        postOrder(raiz->no_direita); 
        printf("%d ", raiz->valor); 
    }
}

No* buscar_no(No* raiz, int valor){
    if (raiz != NULL){ 
        if(raiz->valor == valor){ 
            return raiz; 
        } else if (valor < raiz->valor){ 
            return buscar_no(raiz->no_esquerda, valor); 
        } else if (valor > raiz->valor){ 
            return buscar_no(raiz->no_direita, valor); 
        }
    }
    return NULL;
}

No* remover_no(No** raiz, int valor){
    if(raiz != NULL){ 
        if(valor < (*raiz)->valor){ 
            (*raiz)->no_esquerda = remover_no(&(*raiz)->no_esquerda, valor); 
        } else if (valor > (*raiz)->valor){ 
            (*raiz)->no_direita = remover_no(&(*raiz)->no_direita, valor); 
        } else {
            
            if((*raiz)->no_esquerda == NULL){ 
                No* tmp = (*raiz)->no_direita; 
                free(*raiz); 
                return tmp; 
            } else if((*raiz)->no_direita == NULL){ 
                No* tmp = (*raiz)->no_esquerda; 
                free(*raiz); 
                return tmp; 
            }
           
            No* tmp = (*raiz)->no_direita; 
            while(tmp && tmp->no_esquerda != NULL){ 
                tmp = tmp->no_esquerda; 
            }
            (*raiz)->valor = tmp->valor; 
            (*raiz)->no_direita = remover_no(&(*raiz)->no_direita, tmp->valor); 
        }
    }
    return *raiz;
}