// Módulo 5 - Ficha de Trabalho N.º2 - Problema 5
#include<stdio.h>
#include<locale.h>
#include<string.h>

#define N_AUTOMOVEIS 20

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
        printf("A matrícula do %d.º carro: ",i+1);
        fgets(stand[i].matricula, 7, stdin);
        printf("A marca do carro: ");
        fgets(stand[i].marca, 11, stdin);
        printf("O modelo: ");
        fgets(stand[i].modelo, 21, stdin);
        printf("O ano do carro: ");
        scanf("%d",&stand[i].ano);
        printf("O preço do automóvel: ");
        scanf("%f",&stand[i].preco);
    }
    printf("\nIntroduza o preço para a pesquisa: ");
    scanf("%f",&preco);

    for(i=0;i<N_AUTOMOVEIS;i++) // apresentar marca modelo cor e ano
        if(stand[i].preco<=preco){
         printf("\n\tMarca: %s",stand[i].marca);
         printf("\n\tModelo: %s",stand[i].modelo);
         printf("\n\tCor: %s",stand[i].cor);
         printf("\n\tAno: %d\n----",stand[i].ano);
         count++;
        }
    if(count==0)
        printf("\n\tNão foram encontrados automóveis para o preço da pesquisa.");

    fflush(stdin);
    // solicitar ao utilizador a marca para a pesquisa
    printf("\n\nIntroduza a marca para a pesquisa: ");
    fgets(marca, 15, stdin);
    count=0;
    // pesquisa todos os automóveis para encontrar os que são
    // da marca da pesquisa.
    for(i=0;i<N_AUTOMOVEIS;i++)
        if(strcmp(stand[i].marca,marca)==0){ // se a função devolver 0, as strings são iguais
            printf("\n\tMatrícula: %s",stand[i].matricula);
            printf("\n\tModelo: %s",stand[i].modelo);
            printf("\n\tCor: %s",stand[i].cor);
            printf("\n\tAno: %s",stand[i].ano);
            printf("\n\tPreço: %.2f\n----",stand[i].preco);
            count++;
        }

    // solicitar ao utilizador o ano e a cor para a pesquisa
    printf("\n\nIntroduza o ano para a pesquisa: ");
    scanf("%d",&ano);
    printf("\nIntroduza a cor para a pesquisa: ");
    fgets(cor, 15, stdin);
    count=0;
    // pesquisa todos os automóveis para encontrar os que são
    // do ano e cor da pesquisa.
    for(i=0;i<N_AUTOMOVEIS;i++)
        if(stand[i].ano==ano && strcmp(stand[i].cor,cor)==0){
            printf("\nPreço: %.2f\n----",stand[i].preco);
            count++;
        }

    // verificar se foram encontrados automóveis com o ano e
    // cor da pesquisa.
    if(count==0)
        printf("\nNão foram encontrados automóveis do ano %d na cor %s.",ano,cor);
    
    return 0;
}