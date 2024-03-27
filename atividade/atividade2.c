#include <stdio.h>
#include <stdlib.h>


int principal (int argc, char* argv[]){

    int n = argc - 1;
    int nunemro = 0;
    int resultado = 0;

     for ( int  i  =  2 ; i <= n / 2 ; i ++ ){
        int  n  =  atoi ( argv [ i ])
    if (numero % i == 0 ){
    resultado++;
    }
     }
        
    if (resultado == 0 )
        printf(" verdadeiro %d /n ",numero);
    else 
      printf(" false %d /n ",numero)


   

    exit(0);
}
