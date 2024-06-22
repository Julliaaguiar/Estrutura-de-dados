typedef struct No{
    int valor;
    struct No* no_esquerda;
    struct No* no_direita;
} No;

No* ab_no(int valor);
void inserir_no(No** raiz, int valor);
void inOrder(No* raiz);
void preOrder(No* raiz); 
void postOrder(No* raiz); 
No* buscar_no(No* raiz, int valor); 
No* remover_no(No** raiz, int valor); 