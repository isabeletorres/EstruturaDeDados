#include <stdio.h>

int *p;
int val = 5;

int main (){

    p = &val;

    printf("Ovalor apontado por 'p' é: %d", *p);

    return 0;
}