// Módulo 5 - Ficha de Trabalho N.º2 - Problema 7

#include<stdio.h>
#include<locale.h>

#define N_PERGUNTAS 15
#define N_ALUNOS 20

typedef struct{
    int n_proc;
    char nome[50];
    char respostas[N_PERGUNTAS];
}TAluno;

int main(){

    TAluno turma[N_ALUNOS]; // turma é a variável e TAluno é o tipo de dados da variável
    int i,j;
    char respostas_corretas[N_PERGUNTAS];

    setlocale(LC_ALL,"portuguese");

    //solicitar os dados de cada aluno ao utilizador
    for(i=0;i<N_ALUNOS;i++){
        printf("Introduza o nº de processo do %dº aluno: ",i+1);
        scanf("%d",&turma[i].n_proc);
        printf("Introduza o nome: ");
        fgets(turma[i].nome, 50, stdin);
        for(j=0;j<N_PERGUNTAS;j++){
            printf("Introduza a resposta do aluno à %dº questão: ",j+1);
            turma[i].respostas[j]=getchar();
        }
    }

    // solicitar ao utilizador as soluções do teste
    for(i=0;i<N_PERGUNTAS;i++){
        printf("Introduza a resposta correta da %dº questão: ",i+1);
        respostas_corretas[i]=getchar();
    }

    // calcular e apresentar a cotação do teste de cada aluno
    

    return 0;
}