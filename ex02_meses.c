

#include <stdio.h>

void imprimeMes(int n) {
    switch (n) {
        case 1:  printf("janeiro - 31 dias\n");   break;
        case 2:  printf("fevereiro - 28 dias\n"); break;
        case 3:  printf("marco - 31 dias\n");     break;
        case 4:  printf("abril - 30 dias\n");     break;
        case 5:  printf("maio - 31 dias\n");      break;
        case 6:  printf("junho - 30 dias\n");     break;
        case 7:  printf("julho - 31 dias\n");     break;
        case 8:  printf("agosto - 31 dias\n");    break;
        case 9:  printf("setembro - 30 dias\n");  break;
        case 10: printf("outubro - 31 dias\n");   break;
        case 11: printf("novembro - 30 dias\n");  break;
        case 12: printf("dezembro - 31 dias\n");  break;
        default: printf("Numero invalido\n");
    }
}

int main(void) {
    int n;
    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &n);
    imprimeMes(n);
    return 0;
}
