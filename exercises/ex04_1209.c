#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, limiteMinino, limiteMaximo, intervalo;

    printf("Digite o valor inteiro do limite minimo: ");
    scanf("%i", &limiteMinino);

    printf("Digite o valor inteiro do limite maximo: ");
    scanf("%i", &limiteMaximo);

    for(i=limiteMinino; i < limiteMaximo; i++){
        if(i%3 == 0){
            printf("\n%i", i);
        }
    }

    return 0;
}
