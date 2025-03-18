#include <stdio.h>

struct pessoa {
    int idade;
    float altura;
};

typedef struct pessoa Pessoa;

int main (){

    Pessoa p;
    p.idade = 19;
    p.altura = 1.54;

    printf("A altura da pessoa é: %.2f\n", p.altura);
    printf("A idade da pessoa é: %d", p.idade);
    return 0;
}