#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, numero, maiorNumero = 0, menorNumero = 99999999;

    for(i = 0; i<16; i++){
        printf("\nDigite um numero: ");
        scanf("%i", &numero);

        if(numero > maiorNumero){
            maiorNumero = numero;
        }

        if(numero < menorNumero){
            menorNumero = numero;
        }
    }

    printf("\nMaior numero: %i", maiorNumero);
    printf("\nMenor numero: %i", menorNumero);

    return 0;
}
