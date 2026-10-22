
#include <stdio.h>

#define TAM 500

void locacoesGratis(int A[], int G[]) {
    for (int i = 0; i < TAM; i++) {
        G[i] = A[i] / 15;   /* divisao inteira */
    }
}

int main(void) {
    int A[TAM], G[TAM];

    /* dados de exemplo para teste */
    for (int i = 0; i < TAM; i++) A[i] = (i * 7) % 40;

    locacoesGratis(A, G);

    printf("Cliente | Filmes retirados | Locacoes gratis (primeiros 10)\n");
    for (int i = 0; i < 10; i++) {
        printf("%7d | %16d | %d\n", i + 1, A[i], G[i]);
    }
    return 0;
}
