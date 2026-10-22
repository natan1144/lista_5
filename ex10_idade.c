
#include <stdio.h>

void calculaIdade(int diaN, int mesN, int anoN, int diaH, int mesH, int anoH) {
    int anos  = anoH - anoN;
    int meses = mesH - mesN;
    int dias  = diaH - diaN;

    if (dias < 0) {
        meses--;
        dias += 30;
    }
    if (meses < 0) {
        anos--;
        meses += 12;
    }

    int totalDias = anos * 365 + meses * 30 + dias;   /* aproximacao */

    printf("Idade: %d anos, %d meses e %d dias\n", anos, meses, dias);
    printf("Total aproximado: %d dias\n", totalDias);
}

int main(void) {
    int dn, mn, an, dh, mh, ah;

    printf("Data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dn, &mn, &an);
    printf("Data de hoje (dd mm aaaa): ");
    scanf("%d %d %d", &dh, &mh, &ah);

    calculaIdade(dn, mn, an, dh, mh, ah);
    return 0;
}
