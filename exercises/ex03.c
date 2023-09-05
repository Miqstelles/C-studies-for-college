#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float valorHora, valorPensaoAlimenticia;
    int horaExtra, qtdDependentes;

    printf("Digite o valor que o funcionario recebe por hora: ");
    scanf("%f", &valorHora);

    while(valorHora <=0){
        printf("ERRO! Digite um valor hora maior que zero: ");
        scanf("%f", &valorHora);
    }

    printf("\nDigite quantas horas extras o funcionário fez: ");
    scanf("%i", &horaExtra);

      while(horaExtra < 0){
        printf("ERRO! Digite um número inteiro: ");
        scanf("%i", &horaExtra);
    }

    printf("\nDigite o valor que o funcionário paga de pensão alimenticia: ");
    scanf("%f", &valorPensaoAlimenticia);

    printf("\nDigite a quantidade de dependentes que o funcionario tem: ");
    scanf("%i", &qtdDependentes);

    system("cls");

    float salario;
    salario = valorHora * 220 + (valorHora + (valorHora*0.5)) * horaExtra;

    printf("\nSalário mensal do funcionário: %.2f",  valorHora * 220);
    printf("\nRemuneração hora extra: %.2f", (valorHora + (valorHora*0.5)) * horaExtra);
    printf("\nTotal de rendimento do mês: %.2f", salario);

    printf("\n-------------\n");

    float descontoINSS;

    if(salario <= 1320){
        descontoINSS = salario * 0.075;
        printf("Desconto do INSS: %.2f", descontoINSS);
    }

    else if(salario >= 1320.01 && salario <= 2571.29){
        descontoINSS = (salario * 0.09) - 19.53;
        printf("Desconto do INSS: %.2f", descontoINSS);
    }

    else if(salario >= 2571.30 && salario <= 3856.94){
        descontoINSS = (salario * 0.12) - 96.67;
        printf("Desconto do INSS: %.2f", descontoINSS);
    }

     else if(salario >= 3856.95 && salario <= 7507.49){
        descontoINSS = (salario * 0.14) - 173.81;
        printf("Desconto do INSS: %.2f", descontoINSS);
    }

     else if(salario > 7507.49){
        descontoINSS = (7507.49 * 0.14) - 173.81;
        printf("Desconto do INSS: %.2f", descontoINSS);
    }

    float salarioContribuicao = salario - descontoINSS - (qtdDependentes * 189,59) - valorPensaoAlimenticia;

    float descontoIRFF;

    if(salarioContribuicao <= 1903.98){
        printf("\nDesconto do IRFF: ISENTO");
    }

    else if(salarioContribuicao >= 1903.99 && salarioContribuicao <= 2826.65){
        descontoIRFF = (salarioContribuicao * 0.075) - 142.80;
        printf("\nDesconto do IRFF: %.2f", descontoIRFF);
    }

    else if(salarioContribuicao >= 2826.66 && salarioContribuicao <= 3751.06){
        descontoIRFF = (salarioContribuicao * 0.15) - 354.80;
        printf("\nDesconto do IRFF: %.2f", descontoIRFF);
    }

     else if(salarioContribuicao >= 3751.07 && salarioContribuicao <= 4664.68){
        descontoIRFF = (salarioContribuicao * 0.225) - 636.13;
        printf("\nDesconto do IRFF: %.2f", descontoIRFF);
    }

     else if(salarioContribuicao > 4664.68){
        descontoIRFF = (salarioContribuicao * 0.275) - 869.36;
        printf("\nDesconto do IRFF: %.2f", descontoIRFF);
    }

    printf("\n-------------\n");

    printf("Total a receber: %.2f\n", salario - descontoINSS - descontoIRFF);

    return 0;
}
