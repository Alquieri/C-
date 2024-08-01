#include <stdio.h>



void ex4(){

    char gab[5];
    char alunos[5][10];
    int pont = 0;

    printf("Gabarito:   \n");
    for(int i = 0; i < 3; i++ ){
        printf("Resposta %d:   ", i + 1);
        scanf(" %c", &gab[i]);
    }

    for(int i = 0; i < 3; i++ ){
        printf("Aluno %d : \n", i + 1);
             for(int j = 0; j < 3; j++ ){
             printf("Resposta %d:   ", j + 1);
             scanf(" %c", &alunos[i][j]);
             
            }

   
        }
    
    
    for(int i = 0; i < 3; i++ ){
        pont = 0;
        for(int j = 0; j < 3; j++ ){
            if(alunos[i][j] == gab[i]){
                pont++;
             }
         }
    printf("Aluno %d, acertou %d questoes \n", i + 1, pont);
    }


    
}