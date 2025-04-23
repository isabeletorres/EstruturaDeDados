#include <stdio.h>
#include <math.h>

void calc_esfera ( float r, float *area, float *volume){
    float pi = 3.1415;
    *area = 4 * pi * pow (r, 2);
    *volume = 4.0/3.0 *pi * pow (r, 3);
    printf("A área da esfera é: %.3f, e seu volume é: %.3f", *area, *volume);
}

int main() {
    float raio, area, volume;
    printf("Qual o valor do raio? ");
    scanf("%f", &raio);
    
    calc_esfera(raio, &area, &volume);

    return 0;
}
