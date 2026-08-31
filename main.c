#include <stdio.h>
typedef struct{
    char matricula[12];
    char nome[50];
    char sexo; // M - masculino / F - feminino
    char dataNascimento[11]; // dd/mm/aaaa\0
    char CPF[15]; // xxx.xxx.xxx-xx\0
} Alunos;

typedef struct{
    char matricula[12];
    char nome[50];
    char sexo; // M - masculino / F - feminino
    char dataNascimento; // dd/mm/aaaa\0
    char CPF[15]; // xxx.xxx.xxx-xx\0
} Professores;

typedef struct{
    char nome[50];
    char codigo[10];
    char Semestre[8]; // 2026-02\0
    char matriculaProfessor[12];
} Disciplina;

int main()
{
    int opcao = 1;
    do{
        printf("\n\n------MENU------\n\n"); 
        printf("1 - Cadastrar Aluno\n"); 
        printf("2 - Cadastrar Professor\n"); 
        printf("3 - Cadastrar Disciplina\n"); 
        printf("4 - Ver Relatórios\n"); 
        printf("0 - Sair\n\n");

        printf("Escolha uma opção:\n"); 
        scanf("%d",&opcao);
        
        switch (opcao)
        {
        case 0: printf("\nPrograma encerrado.\n\n");break;
        case 1: printf("\n\n1 - Cadastro de Alunos\n\n");break;
        case 2: printf("\n\n2 - Cadastro de Professores\n\n");break;
        case 3: printf("\n\n3 - Cadastro de Disciplinas\n\n");break;
        case 4: printf("\n\n4 - Relatórios\n\n");break;
        
        default: printf("Escolha uma opção valida.");break;
        }
    }while(opcao != 0);
}
