
#include <stdio.h>

#define N 10

void trocas(int A[N][N]) {
    int aux;

    /* linha 2 <-> linha 8 */
    for (int i = 0; i < N; i++) {
        aux = A[1][i]; A[1][i] = A[7][i]; A[7][i] = aux;
    }

    /* coluna 4 <-> coluna 10 */
    for (int i = 0; i < N; i++) {
        aux = A[i][3]; A[i][3] = A[i][9]; A[i][9] = aux;
    }

    /* diagonal principal <-> diagonal secundaria */
    for (int i = 0; i < N; i++) {
        aux = A[i][i]; A[i][i] = A[i][N - 1 - i]; A[i][N - 1 - i] = aux;
    }

    /* linha 5 <-> coluna 10 */
    for (int i = 0; i < N; i++) {
        aux = A[4][i]; A[4][i] = A[i][9]; A[i][9] = aux;
    }
}

void imprimeMatriz(int A[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int A[N][N];

    /* matriz de exemplo: 1 a 100 */
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            A[i][j] = i * N + j + 1;

    printf("Matriz original:\n");
    imprimeMatriz(A);

    trocas(A);

    printf("\nMatriz alterada:\n");
    imprimeMatriz(A);
    return 0;
}
