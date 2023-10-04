#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, nread = 0;

    while (nread != 1) {
        printf("\nDigite um número: ");
        nread = scanf("%i", &n);

        if (nread != 1) {
            printf("\nNao é um número válido. Tente novamente.");
            scanf("%*[^\n]");
        }
    }

    printf("O número digitado é: %i\n", n);

    return 0;
}
