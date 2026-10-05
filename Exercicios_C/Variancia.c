#include <stdio.h>
#include <math.h>

int main_1() {
    float media = 0;

    float soma = 0;
    int valor[] = {1040, 950, 1100, 980, 1100, 1010, 1010, 900, 1005, 1015, 1030, 910, 1010, 1015, 1030, 910, 1050, 930, 950, 910};
    float qnt = sizeof(valor) / sizeof(int);
    for (int i = 0; i < qnt; i++) {
        soma += valor[i];
    }
    media = soma / qnt;

    soma = 0;

    for (int i = 0; i < qnt; i++) {
        soma += pow((media - valor[i]), 2);
    }
    float variancia_pop = 0;

    variancia_pop = soma / qnt;

    double desvio_padrao = sqrt(variancia_pop);
    printf("%.2lf\n", desvio_padrao);

}