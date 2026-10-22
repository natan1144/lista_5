
#include <stdio.h>

double fahrenheitParaCelsius(double f) {
    return (f - 32.0) * (5.0 / 9.0);
}

int main(void) {
    double f;
    printf("Temperatura em Fahrenheit: ");
    scanf("%lf", &f);
    printf("Em Celsius: %.2f\n", fahrenheitParaCelsius(f));
    return 0;
}
