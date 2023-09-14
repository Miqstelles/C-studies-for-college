#include <stdio.h>
#include <math.h>

int main(){
    int i, number;
    scanf("%i", &number);

    for(i=0; i<number; i++){
         printf(i == number -1 ? "%.f\n" : "%.f ", pow(1.618033989, i) / sqrt(5.0));
    }

    return 0;
}
