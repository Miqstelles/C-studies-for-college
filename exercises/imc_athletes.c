#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char inicialNome;
    float mediaImc = 0, mediaAltura = 0, peso, altura;
    int i, imcSuperior = 0, imcInferior = 0;


    for(i=0; i<15; i++){
        printf("\nInsira a inicial do seu nome: ");
        scanf(" %c", &inicialNome);

        printf("\nInsira seu peso(EX: 59,51): ");
        scanf("%f", &peso);

        while(peso<=0){
            printf("\nPeso invalido! Insira um valor positivo: ");
            scanf("%f", &peso);
        }

        printf("\nInsira sua altura(EX: 1,71): ");
        scanf("%f", &altura);

        while(altura<=0){
            printf("\nAltura invalida! Insira um valor positivo: ");
            scanf("%f", &altura);
        }
        mediaAltura += altura;

        if("%f", peso/pow(altura, 2) > 24.9) imcSuperior++;
        if("%f", peso/pow(altura, 2) < 18.5) imcInferior++;

        mediaImc += peso/pow(altura, 2);
    }

    printf("\nMédia das alturas: %.2f ", mediaAltura / i);
    printf("\nQuantidade de competidores com IMC superior a 24,9: %i", imcSuperior);
    printf("\nQuantidade de competidores com IMC inferior a 18,5: %i", imcInferior);
    printf("\nMédia dos IMCs: %.2f", mediaImc / i);

    return 0;
}
