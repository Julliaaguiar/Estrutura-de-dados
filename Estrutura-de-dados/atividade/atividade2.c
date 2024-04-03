#include <stdio.h>
#include <stdlib.h>


int main (int argc, char* argv[]){

    int n = argc - 1;

     for ( int  i  =  2 ; i <= n / 2 ; i ++ ){
        int  n  =  atoi ( argv [ i ]);
    if (n % i == 0 ){
    resultado++;
    }
     }
        
    if (resultado == 0 ){
        printf(" verdadeiro %d /n ",n);
  
    }
    else 
      printf(" false %d /n ",n);


    exit(0);
}
