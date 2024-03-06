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
    int i,j,soma,max=0,i_max,min=20,i_min;
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

    // calcular e apresentar a cotação do teste de cada aluno e
    // calcular a melhor e a pior classificação do melhor e do pior aluno.
    for(i=0;i<N_ALUNOS;i++){
        for(j=0;j<N_PERGUNTAS;j++){
        if(turma[i].respostas[j]==respostas_corretas[j])
            soma++; // ou soma=soma+1;
        }
        printf("\nCotação do aluno com o processo %d: %d valores.",turma[i].n_proc,soma);
        if(soma>max){
            max=soma;
            i_max=i;
        }
        if(soma<min){
            min=soma;
            i_min=i;
        }
        soma=0;
    }

    // apresentar a identificação do melhor e do pior aluno
    printf("\n\n\tAluno com a melhor classificação: %d valores",max);
    printf("\n\tNº proc.: %d",turma[i_max].n_proc);
    printf("\n\tNome: %s",turma[i_max].nome);

    printf("\n\n\tAluno com a melhor classificação: %d valores",min);
    printf("\n\tNº proc.: %d",turma[i_min].n_proc);
    printf("\n\tNome: %s",turma[i_min].nome);
    
    return 0;
}