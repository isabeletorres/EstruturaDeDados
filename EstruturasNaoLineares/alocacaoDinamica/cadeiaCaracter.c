#include<stdlib.h>
#include <stdio.h>

char* copia(char *s){
    int tamanho = 0;
    while (s[tamanho] != '\0'){
        tamanho ++;
    }
    tamanho++;
    
    char *copia = malloc(tamanho *sizeof(char));
    
    for (int i=0; i<tamanho; i++){
        copia[i] = s[i];
    }
    return copia;
}

int main() {
    char original[10];
    printf("Qual a palavra? ");
    scanf("%s", original);
    
    char *nova = copia(original);
    if (nova != NULL) {
         printf("Cópia: %s\n", nova);

    }
    free(nova);
    return 0;
}
