
#include <stdio.h>

#define LINHAS 61
#define COLUNAS 10

void somaColunas(double M[LINHAS][COLUNAS]) {
    for (int j = 0; j < COLUNAS; j++) {
        double soma = 0;
        for (int i = 0; i < LINHAS - 1; i++) {
            soma += M[i][j];
        }
        M[LINHAS - 1][j] = soma;
    }
}

int main(void) {
    double M[LINHAS][COLUNAS];

    /* matriz de exemplo: M[i][j] = i + j (a 61a linha comeca zerada) */
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
            M[i][j] = (i < LINHAS - 1) ? (double)(i + j) : 0;

    somaColunas(M);

    printf("Soma de cada coluna (61a linha):\n");
    for (int j = 0; j < COLUNAS; j++) {
        printf("Coluna %d: %.0f\n", j + 1, M[LINHAS - 1][j]);
    }
    return 0;
}
