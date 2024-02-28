// Módulo 5 - Ficha de Trabalho N.º2 - Problema 5
#include<stdio.h>
#include<locale.h>
#include<string.h>

#define N_AUTOMOVEIS 3

typedef struct{
    char matricula[7];
    char marca[11];
    char modelo[21];
    char cor[11];
    int ano;
    float preco;
}Informacao;

int main(){

    setlocale(LC_ALL,"portuguese");
    Informacao stand[N_AUTOMOVEIS];
    int i,ano,count=0;
    float preco;
    char marca[15],cor[15];

    printf("Introduza as seguintes informações:\n");
    for(i=0;i<N_AUTOMOVEIS;i++){
        printf("A matrícula do %d.º carro: ",i++);
        gets(stand[i].matricula);
        printf("A marca do carro: ");
        gets(stand[i].marca);
        printf("O modelo: ");
        gets(stand[i].modelo);
        printf("O ano do carro: ");
        scanf("%d",&stand[i].ano);
        printf("O preço do automóvel: ");
        scanf("%f",&stand[i].preco);
    }
    printf("\nIntroduza o preço para a pesquisa: ");
    scanf("%f",&preco);

    for(i=0;i<N_AUTOMOVEIS;i++){ // apresentar marca modelo cor e ano
        if(stand[i].preco<=preco){
         printf("\n\tMarca: %s",stand[i].marca);
         printf("\n\tModelo: %s",stand[i].modelo);
         printf("\n\tCor: %s",stand[i].cor);
         printf("\n\tAno: %d",stand[i].ano);
        }
    printf("\n----");
    }

    // solicitar ao utilizador a marca para a pesquisa
    printf("\nIntroduza a marca para a pesquisa: ");
    gets(marca);

    // pesquisa todos os automóveis para encontrar os que são
    // da marca da pesquisa.
    for(i=0;i<N_AUTOMOVEIS;i++){
        if(strcmp(stand[i].marca,marca)==0){ // se a função devolver 0, as strings são iguais
            printf("\n\tMatrícula: %s",stand[i].matricula);
            printf("\n\tModelo: %s",stand[i].modelo);
            printf("\n\tCor: %s",stand[i].cor);
            printf("\n\tAno: %s",stand[i].ano);
            printf("\n\tPreço: %.2f",stand[i].preco);
        }
        printf("\n----");
    }

    // solicitar ao utilizador o ano e a cor para a pesquisa
    printf("\nIntroduza o ano para a pesquisa: ");
    scanf("%d",&ano);
    printf("\nIntroduza a cor para a pesquisa: ");
    gets(cor);

    // pesquisa todos os automóveis para encontrar os que são
    // do ano e cor da pesquisa.
    for(i=0;i<N_AUTOMOVEIS;i++){
        if(stand[i].ano==ano && strcmp(stand[i].cor,cor)==0){
            printf("\nPreço: %.2f",stand[i].preco);
            count++;
        }
        printf("\n----");
    }

    // verificar se foram encontrados automóveis com o ano e
    // cor da pesquisa.
    if(count==0)
        printf("\nNão foram encontrados automóveis do ano %d na cor %s.",ano,cor);
    
    return 0;
}