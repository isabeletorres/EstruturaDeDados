#include<stdlib.h>
#include <stdio.h>

void imprime_recursivo(char *s) {
    
    if(*s == '\0'){
        return;
    }
    printf("%c", *s);          
    imprime_recursivo(s + 1);   
}

int main() {
    char original[10];
    printf("Qual a palavra? ");
    scanf("%s", original);
    
    imprime_recursivo(original);
   
    return 0;
}
