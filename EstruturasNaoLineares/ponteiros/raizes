#include <stdio.h>
#include <math.h>

int raizes (float a, float b, float c, float * x1, float * x2){
    float delta = pow(b, 2) - (4*a*c);
    
    if (delta == 0.0) {
        return 0;
    }
    
    *x1 = ((-b) + sqrt(delta) ) / (2*a);
    *x2 = ((-b) - sqrt(delta) ) / (2*a);
    
    if (*x1 == *x2){
        return 1;
    }
    
    if (*x2 > *x1){
        float temp = *x1;
        *x1 = *x2;
        *x2 = temp;
    }
    return 2;
}

int main() {
    float a = 2.0, b = -4.0, c =-6.0, x1, x2;
    
    int qt = raizes(a, b, c, &x1, &x2);

    printf("A quantidade de de raízes reais da equação é: %d\n %.2f representa x1\n %.2f representa x2", qt, x1, x2);
    return 0;
}
