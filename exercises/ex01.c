#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salarioFuncionarios;

    printf("Digite o valor do sal�rio dos funcionarios: ");
    scanf("%f", &salarioFuncionarios);

    while(salarioFuncionarios <= 0){
        printf("ERRO Digite o valor do sal�rio maior que zero: ");
        scanf("%f", &salarioFuncionarios);
    }

    printf("\nValor a ser pago de encargo patronal: %.2f", salarioFuncionarios * 0.2 * 15);
    printf("\nValor a ser pago de FGTS: %.2f\n", salarioFuncionarios * 0.08 * 15);

    printf("\nTotal de despesas com funcion�rios: %.2f\n", (salarioFuncionarios * 0.2 * 15) + (salarioFuncionarios * 0.08 * 15));

    return 0;
}
