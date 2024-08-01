#include <stdio.h>

void km(){
    float km;
    printf("Digite os kilometros porora: ");
    scanf("%f", &km);
    km = km / 3.6;

    printf("Em metros por segundo sera: %.3f ", km);  
}

void ms(){
    float ms;
    printf("Digite os metros por segundo: ");
    scanf("%f", &ms);
    ms = ms * 3.6;

    printf("Em metros por segundo sera: %.3f \n", ms);  


}


void ex2(){
    int op = 0;
    int cont = 0;

    do{
    
       

    switch(op){
        case 1:
        km();
        break;

        case 2:
        ms();
        break;

        case 0:
        cont = 1;
        break;

        default:
        printf("erro");
        break;

    }
    }while(cont != 1);

    printf("\n \n Programa encerrado ");





}

