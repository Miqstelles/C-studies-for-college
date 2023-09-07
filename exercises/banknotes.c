#include <stdio.h>
#include <math.h>

int main()
{
    int n, notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    scanf("%i", &n);
    printf("%i\n", n);

    notas100 = n / 100;
    n %= 100;

    notas50 = n / 50;
    n %= 50;

    notas20 = n / 20;
    n %= 20;

    notas10 = n / 10;
    n %= 10;

    notas5 = n / 5;
    n %= 5;

    notas2 = n / 2;
    n %= 2;

    notas1 = n;

    printf("%i nota(s) de R$ 100,00\n", notas100);
    printf("%i nota(s) de R$ 50,00\n", notas50);
    printf("%i nota(s) de R$ 20,00\n", notas20);
    printf("%i nota(s) de R$ 10,00\n", notas10);
    printf("%i nota(s) de R$ 5,00\n", notas5);
    printf("%i nota(s) de R$ 2,00\n", notas2);
    printf("%i nota(s) de R$ 1,00\n", notas1);

    return 0;
}
