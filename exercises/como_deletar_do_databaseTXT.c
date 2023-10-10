#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    FILE *pFile;
    char name[80];
    char *buffer;
    char *ptr;

    buffer = malloc(1000*sizeof(char));
    memset(buffer, 0, 1000*sizeof(char));
    ptr = buffer;

    pFile = fopen("database.txt", "r");

    if(pFile != NULL){
        while(!feof(pFile)){
            fgets(name, 80, pFile);


            if(strcmp(name, "Miqueias\n") !=0){
                strcpy(ptr, name);
                ptr += strlen(name);
            }
        }
        fclose(pFile);

        pFile = fopen("database.txt", "w");
        fprintf(pFile, "%s", buffer);
        fclose(pFile);
    }
    else {
        printf("Não foi possivel abrir o arquivo.\n");
    }

    return 0;
}
