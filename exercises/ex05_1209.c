#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, rodadaMelhorTempo = 0;
    float tempo, melhorTempo = 9999999, media = 0;

    for(i = 0; i<10; i++){
        printf("Digite a duração que o piloto percorreu a volta %i: ", i+1);
        scanf("%f", &tempo);

        if(tempo < melhorTempo){
            melhorTempo = tempo;
            rodadaMelhorTempo = i+1;
        }

        media += tempo;
    }

    printf("\nDuração do melhor tempo: %.2f", melhorTempo);
    printf("\nRodada em que teve o melhor tempo: %i", rodadaMelhorTempo);
    printf("\nTempo médio das 10 voltas: %.2f m", media / i);

    return 0;
}
