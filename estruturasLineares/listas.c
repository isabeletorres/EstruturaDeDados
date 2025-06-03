#include <stdio.h>
#include <stdlib.h>

struct lista{
    int info;
    struct lista *prox;
};

typedef struct lista Lista;

int busca_numero(Lista *inicio){
    int n;
    printf("Número: ");
    scanf("%d", &n);
    
    Lista *p = inicio;
    while (p != NULL) {
        if (p->info == n) {
            return n; 
        }
        p = p->prox;
    }
    return -1;
    
}
void inserir_apos_primeiro(Lista *inicio, int novo){
   if (inicio == NULL){
       printf("Lista vazia");
       return;
   }
   
   Lista *novo_no = (Lista *)malloc(sizeof(Lista));
   novo_no->info = novo; 
   novo_no->prox = inicio->prox;
   inicio->prox = novo_no;   
}

void troca(Lista *inicio, int antigo, int novo){
    Lista *p = inicio;
    int trocado = 0;
    
    while (p != NULL){
        if(p->info == antigo){
            inserir_apos_primeiro(inicio, novo);
            trocado = 1;
        }
         p = p->prox;
    }
}
int main() {
    Lista *inicio = NULL, *aux;
    int x=0;
    
    while(x != -1){
        scanf("%d", &x);
        aux = (Lista *)malloc(sizeof(Lista));
        aux ->info=x;
        aux-> prox = inicio;
        inicio = aux;
    }
    int novo=0;
    int num = busca_numero(inicio);
    if (num != -1) {
        printf("O número %d foi encontrado, qual o novo valor: ", num);
        scanf("%d", &novo);
       troca(inicio, num, novo);
    } else {
        printf("O número NÃO está na lista.\n");
    }

    return 0;
}