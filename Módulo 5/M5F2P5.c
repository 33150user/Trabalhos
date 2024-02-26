// Módulo 5 - Ficha de Trabalho N.º2 - Problema 5
#include<stdio.h>
#include<locale.h>
#include<>

#define AUTOMOVEIS 3

typedef struct{
    char matricula[7];
    char marca[11];
    char modelo[21];
    char cor[11];
    int ano;
    float preco;
}Informacoes;

int main(){

    setlocale(LC_ALL,"portuguese");
    Informacoes automoveis[AUTOMOVEIS];
    int i;

    printf("Introduza as seguintes informações:\n");
    for(i=0;i<AUTOMOVEIS;i++){
        printf("A matrícula do %d.º carro: ",i++);
        gets(automoveis[i].matricula);
        printf("A marca do carro: ");
        gets(automoveis[i].marca);
        printf("O modelo: ");
        gets(automoveis[i].modelo);
        printf("O ano do carro: ");
        scanf("%d",&automoveis[i].ano);
        printf("O preço do automóvel: ");
        scanf("%f",&automoveis[i].preco);
    }
    printf("\nIntroduza um preço: ");
    scanf("%f",&preco);
    for(i=0;i<AUTOMOVEIS;i++) // apresentar marca modelo cor e ano
        if(automoveis[i].preco<=preco){
         printf("");
        }
    return 0;
}