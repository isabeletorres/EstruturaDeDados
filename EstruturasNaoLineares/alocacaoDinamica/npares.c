#include <stdio.h>
int * somente_pares (int n, int * v, int * npares){
    int cont = 0;
    
    for(int i=0; i<n; i++){
        if(v[i] %2 == 0){
            cont++;
        }
    }
    int j =0;
    int *pares = malloc(cont *sizeof(int));
    for(int i=0; i<n; i++){
        if(v[i] %2 == 0){
            pares[j] = v[i];
            j++;
        }
    }
    *npares = cont;
    return pares;
}
int main() {
    int v[] = {1, 4, 5, 8, 10, 3, 2};
    int n = sizeof(v) / sizeof(v[0]);
    int qtd_pares;

    int *resultado = somente_pares(n, v, &qtd_pares);

    if (resultado != NULL) {
        printf("Elementos pares: ");
        for (int i = 0; i < qtd_pares; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");

        free(resultado);  
    }

    return 0;
}
