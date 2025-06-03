#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct registro{
    int codigo;
    char descricao[100];
    int qtd_estoque;
    float preco;
};
typedef struct registro Registro;

void ler_produto(Registro *produto, int n){
    
    for (int i=0; i<n; i++){
        printf("\nProduto %d:\n", i + 1);
        printf("Código do produto: ");
        scanf("%d", &produto[i].codigo);
        getchar(); 

        printf("Descrição do produto: ");
        fgets(produto[i].descricao, 100, stdin);
        produto[i].descricao[strcspn(produto[i].descricao, "\n")] = '\0';
        printf("Quantidade em estoque: ");
        scanf("%d", &produto[i].qtd_estoque);
        printf("Preço do produto: ");
        scanf("%f", &produto[i].preco);
    }
}

void imprimir_produto(Registro *produto, int n){
    for (int i=0; i<n; i++){
        printf("\nProduto %d:\n", i + 1);
        printf("Código do produto:%d \n", produto[i].codigo);
        
        printf("Descrição do produto: %s\n", produto[i].descricao);

        printf("Quantidade em estoque: %d\n", produto[i].qtd_estoque);
        printf("Preço do produto: %.2f\n", produto[i].preco);
    }
}

void ordenarPorCodigo(Registro *produtos, int n){
    int temp;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if(produtos[j].codigo > produtos[j +1].codigo){
                temp = produtos[j].codigo;
                 produtos[j].codigo = produtos[i].codigo;
                  produtos[i].codigo = temp;
            }
        }
    }
}
int buscaBinaria(Registro *produtos, int n, int codigo, int *comparacoes) {
    int inicio, fim = n-1;
    *comparacoes = 0 ;
    
    int meio = (inicio+fim)/2;
    
    while(inicio <=fim){
        (*comparacoes);
       if (produtos[meio].codigo == codigo) {
            return meio;
        } else if (produtos[meio].codigo > codigo) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return -1;
}

Registro* redimensionarVetor(Registro *produtos, int novo_tam) {
    Registro *novo = realloc(produtos, novo_tam * sizeof(Registro));
    if (!novo) {
        printf("Erro ao realocar.\n");
        exit(1);
    }
    return novo;
}
int main() {
    int n = 2;
    Registro *produtos = malloc(n * sizeof(Registro));
    
    if (produtos == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    ler_produto(produtos, n);
    imprimir_produto(produtos, n);
    ordenarPorCodigo(produtos, n);
    
    int codigoBusca, comparacoes;
    printf("\nInforme o código para busca: ");
    scanf("%d", &codigoBusca);
    int pos = buscaBinaria(produtos, n, codigoBusca, &comparacoes);
    
    if (pos != -1) {
        printf("Produto encontrado. Quantidade em estoque: %d\n", produtos[pos].qtd_estoque);
    } else {
        printf("Produto não encontrado.\n");
    }
    printf("Comparações feitas: %d\n", comparacoes);
    
    int novo_tam;
    printf("\nNova quantidade de produtos: ");
    scanf("%d", &novo_tam);
    produtos = redimensionarVetor(produtos, novo_tam);

    ler_produto(produtos,novo_tam);
    imprimir_produto(produtos, novo_tam);
    free(produtos);

    return 0;
}