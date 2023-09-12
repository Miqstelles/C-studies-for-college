#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, qtdGeral = 0, vogalA = 0, vogalE = 0, vogalI = 0, vogalO = 0, vogalU = 0;
    char letra;

    for(i=0; i<20; i++){
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);

        letra = toupper(letra);

        switch(letra){
            case 'A':
                vogalA++;
                break;
            case 'E':
                vogalE++;
                break;
            case 'I':
                vogalI++;
                break;
            case 'O':
                vogalO++;
                break;
            case 'U':
                vogalU++;
                break;
            default:
                qtdGeral++;
                break;
        }
    }

    printf("\nQuantidade da vogal A: %i", vogalA);
    printf("\nQuantidade da vogal E: %i", vogalE);
    printf("\nQuantidade da vogal I: %i", vogalI);
    printf("\nQuantidade da vogal U: %i", vogalU);
    printf("\nQuantidade da vogal O: %i", vogalO);

    printf("\nQuantidade de outros caracteres: %i", qtdGeral);

    return 0;
}
