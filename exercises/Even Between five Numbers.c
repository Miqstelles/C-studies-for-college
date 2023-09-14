#include <stdio.h>

int main() {
    int i, number, pares = 0;

    for(i=0; i<5; i++){
        scanf("%i", &number);
        if(number % 2 == 0) pares++;
    }

    printf("%i valores pares\n", pares);

    return 0;
}
