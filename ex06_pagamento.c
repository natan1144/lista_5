
#include <stdio.h>
#include <math.h>

char menuOpcao(void) {
    char op;
    printf("\na) A vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preco da etiqueta)\n");
    printf("c) De 3 a 10 vezes com 3%% de juros ao mes (compras acima de R$ 100,00)\n");
    printf("Escolha a opcao: ");
    scanf(" %c", &op);
    return op;
}

void aVista(double valor) {
    printf("Total a pagar: R$ %.2f\n", valor * 0.90);
}

void emDuasVezes(double valor) {
    printf("2 prestacoes de R$ %.2f\n", valor / 2.0);
}

void parcelado(double valor) {
    int n;
    double total;

    if (valor <= 100.0) {
        printf("Opcao disponivel apenas para compras acima de R$ 100,00\n");
        return;
    }

    do {
        printf("Numero de parcelas (3 a 10): ");
        scanf("%d", &n);
    } while (n < 3 || n > 10);

    total = valor * pow(1.03, n);   /* juros compostos de 3% ao mes */
    printf("%d prestacoes de R$ %.2f\n", n, total / n);
    printf("Total: R$ %.2f\n", total);
}

int main(void) {
    double total;
    char op;

    printf("Total gasto: R$ ");
    scanf("%lf", &total);

    op = menuOpcao();
    switch (op) {
        case 'a': case 'A': aVista(total);      break;
        case 'b': case 'B': emDuasVezes(total); break;
        case 'c': case 'C': parcelado(total);   break;
        default: printf("Opcao invalida\n");
    }
    return 0;
}
