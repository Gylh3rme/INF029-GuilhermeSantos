#include <stdio.h>

typedef struct Classe {
    int lim_inf;
    int lim_sup;
    int freq;
} Classe;

int achar_maior_freq(Classe* faixa, int qnt) {
    int maior = faixa[0].freq;
    int indice = 0;
    for (int i = 0; i < qnt; i++) {
        if (faixa[i].freq > maior) {
            maior = faixa[i].freq;
            indice = i;
        }
    }

    return indice;
}

int main() {

    Classe faixa_salarial[] = {
        {0, 2, 10000},
        {2, 4, 3900},
        {4, 6, 2000},
        {6, 8, 1100},
        {8, 10, 800},
        {10, 12, 700},
        {12, 14, 2000}
    };

    float media_classe = 0.0;
    float soma = 0.0;
    int qnt = sizeof(faixa_salarial) / sizeof(faixa_salarial[0]);
    int freq_total = 0;
    float media = 0.0;
    for (int i = 0; i < qnt; i++) {
        freq_total += faixa_salarial[i].freq;
    }

    for (int i = 0; i < qnt; i++) {
        Classe* f = &faixa_salarial[i];
        media_classe = (f->lim_inf + f->lim_sup) / 2.0;
        soma += media_classe * f->freq;
    }
    media = soma / freq_total;

    printf("media = %.2f\n", media);

    Classe classe_modal;
    float moda = 0.0;
    int indice = achar_maior_freq(faixa_salarial, qnt);
    int maior_freq = faixa_salarial[indice].freq;

    classe_modal = faixa_salarial[indice];

    int amplitude_modal = classe_modal.lim_sup - classe_modal.lim_inf;

    int freq_anterior = (indice > 0) ? faixa_salarial[indice - 1].freq : 0;
    int freq_posterior = (indice < qnt - 1) ? faixa_salarial[indice + 1].freq : 0;

    int dif_anterior = classe_modal.freq - freq_anterior;
    int dif_posterior = classe_modal.freq - freq_posterior;

    //formula de kzuber
    moda = classe_modal.lim_inf + ((float)dif_anterior / (dif_anterior + dif_posterior)) * amplitude_modal;

    printf("Moda = %.2f\n", moda);

    return 0;
}
