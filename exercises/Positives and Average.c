#include <stdio.h>

int main() {
    float number, media = 0;
    int positivos = 0, i;

    for(i=0; i<6; i++){
        scanf("%f", &number);
        if(number >= 0) {
            positivos++;
            media += number;
        }
    }

    printf("%i valores positivos\n", positivos);
    printf("%.1f\n", media / positivos);

    return 0;
}
