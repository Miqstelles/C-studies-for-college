#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, qtdAtletas = 0, qtdAtletas150 = 0;
    double altura, mediaAltura;

    for(i=0; i<8; i++){
        printf("\nDigite a altura do atleta %i: ", i+1);
        scanf("%lf", &altura);

        qtdAtletas++;

        if(altura > 1.5) {
            qtdAtletas150++;
        }

        mediaAltura += altura;
    }

    printf("\nMédia das alturas: %.2lf", mediaAltura / qtdAtletas);
    printf("\nQuantidade de atletas com altura superior a 1.5 metros: %i", qtdAtletas150);

    return 0;
}
