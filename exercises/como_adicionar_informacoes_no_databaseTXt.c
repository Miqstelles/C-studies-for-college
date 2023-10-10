#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *pFile;
    char name[80];
    int score;

    pFile = fopen("database.txt", "a");

    if (pFile != NULL)
    {
        scanf("%s", name);
        scanf("%i", &score);
        fprintf(pFile, "%s %i\n", name, score);
        fclose(pFile);
    }
    else
    {
        printf("Não foi possivel abrir o arquivo.\n");
    }

    return 0;
}
