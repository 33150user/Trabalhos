// Módulo 5 - Ficha de Trabalho N.º 2 - Problema 6

#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<string.h>

#define TAMANHO 3

typedef struct{
    char codigo[31];
    char designacao[21]; // tipo/nome do produto (mesa, faca, etc...)
    char setor;
    int stock;
    float semIVA;
    float IVA;
}TProduto;

int main(){

    setlocale(LC_ALL,"portuguese");
    TProduto supermercado[TAMANHO];
    int i;
    char codigo[31];

    printf("Introduza as seguintes informações dos produtos: ")
    for(i=0;i<TAMANHO;i++){
        printf("O código de barras do %d.º produto: ",i+1);
        fgets(supermercado[i].codigo, 31, stdin);
        printf("A designação: ");
        fgets(supermercado[i].designacao, 21, stdin);
        printf("O setor: ");
        getchar(supermercado[i].setor);
        printf("O stock: ");
        scanf("%d",&supermercado[i].stock);
        printf("O preço sem IVA: ");
        scanf("%f",&supermercado[i].semIVA);
        printf("O IVA (em percentagem): ");
        scanf("%f",&supermercado[i].IVA);
    }

    printf("\n\nIntroduza o código de barras de um produto que deseja pesquisar: ");
    fgets(codigo, 31, stdin);

    for(i=0;i<TAMANHO;i++){
        if(strcmp(supermercado[i].codigo,codigo)==0)
            printf("Produto encontrado!\nInformações:\nDesignação: %s.\nStock: %d.\nPreço (sem IVA): %f.\nIVA: %.2f",supermercado[i].designacao,supermercado[i].stock);
    }
    return 0;
}