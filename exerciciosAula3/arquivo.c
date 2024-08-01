#include <stdio.h>
#include <string.h>

int main(){

    FILE *arq;
    char nome[50];

    arq = fopen("arquivo.txt", "w"); // w, a, r
    if(arq){

        printf("Digite um nome: ");
        fgets(nome, sizeof(nome), stdin);

        fputs(nome, arq);

    } else {
        printf("Não foi possível criar o arquivo");
    }


    fclose(arq);


    return 0;
}

