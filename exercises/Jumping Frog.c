#include <stdio.h>

int main() {
    int i, puloSapo, quantidadeCanos, alturaCano = 1, canoAnterior, distancia, vitoria = 1;

    scanf("%i %i", &puloSapo, &quantidadeCanos);

    for(i=0; i<quantidadeCanos; i++){
        canoAnterior = alturaCano;
        scanf("%i", &alturaCano);

        distancia = canoAnterior - alturaCano;
        if(distancia < 0) distancia = distancia * -1;

        if(distancia > puloSapo){
             vitoria = 0;
             i = quantidadeCanos;
        }
    }

    printf(vitoria == 1 ? "YOU WIN\n" : "GAME OVER\n");

    return 0;
}
