#include <stdio.h>

int main() {
    float salario, imposto;

    scanf("%f", &salario);

    if (salario <= 2000.00) {
        imposto = 0;
    }
    else if (salario <= 3000.00) {
        imposto = (salario - 2000.00) * 0.08;
    }
    else if (salario <= 4500.00) {
        imposto = 1000.00 * 0.08 + (salario - 3000.00) * 0.18;
    }
    else {
        imposto = 1000.00 * 0.08 + 1500.00 * 0.18 + (salario - 4500.00) * 0.28;
    }

    if (imposto == 0) {
        printf("Isento\n");
    } else {
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}
