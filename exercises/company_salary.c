#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int departamentoA, departamentoB, departamentoC, tempoDeEmprego, tempoDeEmpregoA, tempoDeEmpregoB, tempoDeEmpregoC, qtdFuncionariosAumento500 = 0, qtdDepartamentoB10anos = 0, qtdDepartamentoA = 0;
    float salario, salarioA = 0, salarioB = 0, salarioC = 0, mediaA, mediaB, mediaC, maiorSalarioA = 0, maiorSalarioB = 0, maiorSalarioC = 0;
    char resposta = 'S', departamento, departamentoMaiorSalario;

    while(resposta != 'N'){
        printf("\nDe qual departamento você é?(A, B ou C): ");
        scanf(" %c", &departamento);
        departamento = toupper(departamento);

        while(!(departamento == 'A'|| departamento == 'B' || departamento == 'C')){
            printf("\nDepartamento invalido! Insira um válido: ");
            scanf(" %c", &departamento);
            departamento = toupper(departamento);
        }

        printf("\nQual seu salário base: ");
        scanf("%f", &salario);

        while(salario<=0){
            printf("ERRO, Insira um valor de salário positivo: ");
            scanf("%f", &salario);
        }

        printf("\nQual seu tempo de emprego em anos: ");
        scanf("%i", &tempoDeEmprego);

         while(tempoDeEmprego<=0){
            printf("ERRO, Insira um valor de tempo de emprego positivo: ");
            scanf("%i", &tempoDeEmprego);
        }

        switch(departamento){
            case 'A':
                qtdDepartamentoA++;
                if(tempoDeEmprego <=10) {
                    salarioA += salario + (salario * 0.05);
                    if(salario + (salario * 0.05) > maiorSalarioA) maiorSalarioA = salario + (salario * 0.05);
                }
                else if(tempoDeEmprego > 10) {
                    salarioA += salario + (salario * 0.07);
                     if(salario + (salario * 0.07) > maiorSalarioA) maiorSalarioA = salario + (salario * 0.07);
                }

                qtdFuncionariosAumento500 = salarioA - salario > 500 ? ++qtdFuncionariosAumento500 : qtdFuncionariosAumento500;

                break;

            case 'B':
                if(tempoDeEmprego<=5) salarioB = salario + (salario * 0.10);
                else if(tempoDeEmprego>5) salarioB += salario + (salario *0.15);

                qtdFuncionariosAumento500 = salarioB - salario > 500 ? ++qtdFuncionariosAumento500 : qtdFuncionariosAumento500;
                qtdDepartamentoB10anos = tempoDeEmprego > 10 ? ++qtdDepartamentoB10anos : qtdDepartamentoB10anos;

                if(salarioB > maiorSalarioB) maiorSalarioB = salarioB;

                break;

            case 'C':
                if(tempoDeEmprego <= 7) salarioC = salario + (salario *0.09);
                else if(tempoDeEmprego >7) salarioC += salario + (salario * 0.13);

                qtdFuncionariosAumento500 = salarioC - salario > 500 ? ++qtdFuncionariosAumento500 : qtdFuncionariosAumento500;
                if(salarioC > maiorSalarioC) maiorSalarioC = salarioB;

                break;
        }

        printf("Deseja  fazer um novo cadastro? (S/N): ");
        scanf(" %c", &resposta);
        resposta = toupper(resposta);
    }

    printf("\nA média dos salários do departamento A é de: RS %.2f", salarioA > 0 ? salarioA / qtdDepartamentoA: salarioA);
    printf("\nA quantidade de funcionarios que receberam um aumento mais de RS500 de aumento foi: %i", qtdFuncionariosAumento500);

    if(maiorSalarioA > maiorSalarioB && maiorSalarioA > maiorSalarioC) printf("\nO Departamento que teve o maior salário foi o A, com um valor de: R$ %.2f", maiorSalarioA);
    else if(maiorSalarioB > maiorSalarioA && maiorSalarioB > maiorSalarioC) printf("\nO Departamento que teve o maior salário foi o B, com um valor de: R$ %.2f", maiorSalarioB);
    else if(maiorSalarioC > maiorSalarioA && maiorSalarioC > maiorSalarioB) printf("\nO Departamento que teve o maior salário foi o C, com um valor de: R$ %.2f", maiorSalarioC);

    printf("\nA quantidade de funcionarios do departamento B que com tempo de emprego maior que 10 anos foi: %i", qtdDepartamentoB10anos);

    return 0;
}
