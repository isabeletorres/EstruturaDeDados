#include <stdlib.h>
#include <stdio.h>

int main() {
    int qtd_caracteres;
    
    printf("Quantos caracteres você deseja digitar? ");
    scanf("%d", &qtd_caracteres);
    
    char *caracter = malloc(qtd_caracteres * sizeof(char ));
    
    for (int i=0; i<qtd_caracteres; i++){
        printf("Digite o caracter da posição [%d]", i);
        scanf(" %c", &caracter[i]);
    }
    
    printf("Você digitou os caracteres: \n");
    for (int i=0; i<qtd_caracteres; i++){
        printf("[%c] ",caracter[i]);
    }
    
    free(caracter);
    
    return 0;
}