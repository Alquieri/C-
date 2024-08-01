#include <stdio.h>

void ex3(){

    int vetor[10];
    

    for(int i = 0; i < 10; i++ ){
        printf("Digite um numero diferentes:  ");
        scanf("%d", &vetor[i]);
        for(int j = 0; j < i; j++ ){
            if(vetor[i] == vetor[j]){
                printf("Mesmo numero, digite novamente: ");
                scanf("%d", &vetor[i]);
            }
        }
     
    }

    for(int i = 0; i < 10; i++ ){
        printf("Numero [%d]: %d \n", i, vetor[i] );

    }

    
}
