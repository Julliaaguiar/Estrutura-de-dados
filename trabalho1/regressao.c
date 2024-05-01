#include <stdio.h>
#include <stdlib.h>

    typedef struct{
        int x;
        int y;
    }Ponto;

 
    float calcular_media_x(int* valores , int n ){
        int soma =0;
        for(int i = 0 ; i<n ; i++){
            soma += valores[i];
        }return(float)soma /n ;
    }

    float calcular_media_y(float* valores , int n ){
        float soma =0;
        for(int i = 0 ; i<n ; i++){
            soma += valores[i];
        }return soma / n ;
    }

    int main(int argc,char* argv[]){
        if (argc != 2) {
        printf("Uso: %s dadaos.csv\n", argv[0]);
        return 1;
    }

    FILE *arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    float inclinaçao = (calcular_media_x*calcular_media_y)/(calcular_media_x,2);

    float intercepcao = (calcular_media_y - inclinaçao * calcular_media_x);

    float regressao = (inclinaçao * calcular_media_x + intercepcao );
    
printf("Iregressao linear: y=%2fx %d ", inclinacao, interceptacao);

    
    return 0;
}