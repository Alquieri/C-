#include <stdio.h>
#include <string.h>

void alfabeto(){

    char letra;
    printf("Digite 1 letra: ");
    scanf(" %c", &letra);

    if(letra <= 90){
         for(;letra <= 90;letra++ ){
        printf(" %c", letra);
    }
    }
    else if(letra >= 90){
         for(;letra <= 122;letra++ ){
        printf(" %c", letra);
    }
    }


   



    







}
