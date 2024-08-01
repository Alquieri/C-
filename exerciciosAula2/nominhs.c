#include <stdio.h>
#include <string.h>


void nominhos(){
    char nomes[3][50];
    printf("Digite 3 nomes, dando enter após cada um: ");

    for(int i = 0; i < 3; i++ ){
        fgets(nomes[i],50,stdin);
    }

    for(int i = 0; i < 3; i++ ){
        printf("nome %d:  %s", i + 1, nomes[i]);
    }









}