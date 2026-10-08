#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 250
int main(){
    int caseSensitive = 0;
    char texto[TAM+1];
    char letra;
    int contagem = 0;
    printf("Digite um texto (ate 250 caracteres):\n");
    fgets(texto, TAM, stdin);
    texto[strcspn(texto,"\n")] = '\0';

    printf("\nDigite a letra: ");
    scanf(" %c",&letra);
    getchar();

    int tam_string = strlen(texto);

    if (caseSensitive){

        letra = toupper(letra);

        for(int i = 0; i < tam_string; i++){
            texto[i] = toupper(texto[i]);
        }
    }

    for(int i = 0; i < tam_string; i++){
        if(texto[i] == letra)
            contagem++;
    }

    printf("\nA letra '%c' apareceu %d vezes.\n",letra, contagem);
    
    return 0;
}