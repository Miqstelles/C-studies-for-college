#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int horas, minutos;

    printf("Insira uma hora(0-23): ");
    scanf("%i", &horas);

    printf("Insira os minutos (0-59): ");
    scanf("%i", &minutos);

    if(!(horas >= 0 && horas <= 23 && minutos >=0 && minutos <= 59)) printf("\nHorário inválido!");
    else if(horas < 12) printf("\nBom dia!");
    else if(horas >= 12 && horas <=18) {
        if(horas == 18 && minutos > 0) printf("\nBoa noite!");
        else printf("\nBoa tarde!");
    }
    else printf("\nBoa noite!");

    return 0;
}
