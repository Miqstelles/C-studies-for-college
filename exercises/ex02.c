#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int diasTrabalho;
    float salario;

    printf("Digite o numero de dias em que você vai para a empresa: ");
    scanf("%i", &diasTrabalho);

    while(diasTrabalho <= 0){
        printf("ERRO Digite o numero de dias maior que zero: ");
        scanf("%i", &diasTrabalho);
    }

    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);

    while(salario <= 0){
        printf("ERRO Digite o valor do salário maior que zero: ");
        scanf("%f", &salario);
    }

    system("cls");

    printf("Dias trabalhados: %i", diasTrabalho);
    printf("\nSalário: R$%.2f\n", salario);

    printf("\nDesconto auxílio transporte: %.2f", salario * 0.06);
    printf("\nGasto com transporte sem auxílio da empresa: %.2f\n", diasTrabalho * 35.40);

    if(salario*0.06 > diasTrabalho * 35.40){
        printf("\nNão compensa aderir ao programa de auxílio transporte!\n");
    }
    else if(salario*0.06 < diasTrabalho * 35.40){
        printf("\nCompensa aderir ao programa de auxílio transporte!\n");
    }
    else if(salario*0.06 == diasTrabalho * 35.40){
        printf("\nIndiferente!\n");
    }

    return 0;
}

