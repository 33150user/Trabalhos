// Módulo 5 - Ficha de Trabalho N.º 2 - Problema 6

#include<stdio.h>
#include<locale.h>
#include<ctype.h>

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

    printf("Introduza as seguintes informações dos produtos: ")
    for(i=0;i<TAMANHO;i++){
        printf("O código de barras do %d.º produto: ",i+1);
        gets(supermercado[i].codigo);
        printf("A designação: ");
        gets(supermercado[i].designacao);
        printf("O setor: ");
        getchar(supermercado[i].setor);
        printf("O stock: ");
        scanf("%d",&supermercado[i].stock);
        printf("O preço sem IVA: ");
        scanf("%f",&supermercado[i].semIVA);
        printf("O IVA (em percentagem): ");
        scanf("%f",&supermercado[i].IVA);
    }
    
    return 0;
}