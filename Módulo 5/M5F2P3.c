// Módulo 5 - Ficha de Trabalho N.º2 - Problema 3

#include<stdio.h>
#include<locale.h>

#define NCOELHOS 3 // default 50

typedef struct{
    int codigo;
    int mes;
    int ano;
    float peso;
    char sexo;
}TCOELHOS;

int main(){

    setlocale(LC_ALL,"portuguese");
    int i,count;
    TCOELHOS animais[NCOELHOS];

    printf("Introduza as seguintes informações:\n");
    for(i=0;i<NCOELHOS;i++){
        printf("O código do %d.º animal: ",i++);
        scanf("%d",&animais[i].codigo);
        printf("O mês de nascimento (1 a 12): ");
        scanf("%d",&animais[i].mes);
        printf("O ano de nascimento: ");
        scanf("%d",&animais[i].ano);
        printf("O sexo do animal (M - Masculino, F - Feminino): ");
        scanf("%c",&animais[i].sexo);
        printf("O peso em quilogramas: ");
        if((animais[i].sexo=='M') && (animais[i].peso>2))
            count++;
    }

    printf("\nA quantidade de coelhos que podem ser vendidos é de: %d coelhos.",count);
    return 0;
}