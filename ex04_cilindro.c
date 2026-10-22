
#include <stdio.h>

#define PI 3.1414592

double volumeCilindro(double altura, double raio) {
    return PI * raio * raio * altura;
}

int main(void) {
    double h, r;
    printf("Altura e raio do cilindro: ");
    scanf("%lf %lf", &h, &r);
    printf("Volume: %.2f\n", volumeCilindro(h, r));
    return 0;
}
