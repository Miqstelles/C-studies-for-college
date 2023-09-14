#include <stdio.h>
 
int main() {
    int i , number, pares = 0, impares = 0, negativos = 0, positivos = 0;
    
    for(i=0; i<5; i++){
        scanf("%i", &number);
        
        pares = number % 2 == 0 ? ++pares : pares;
        impares = number % 2 == 1 ? ++impares : impares;
        negativos = number < 0 ? ++negativos : negativos;
        positivos  = number > 0 ? ++positivos : positivos;
    }
    
    printf("%i valor(es) par(es)\n", pares);
    printf("%i valor(es) impar(es)\n", impares);
    printf("%i valor(es) positivo(s)\n", positivos);
    printf("%i valor(es) negativo(s)\n", negativos);
 
    return 0;
}
