#include <stdio.h>
#include <string.h>


void covert(char *x){
    
    for(int i = 0; i <= strlen(x);i++){

        x[i] = toupper(x[i]);

        printf("%c", x[i]);     
    }
    }

void ivert(char *x){

    for(int i = strlen(x); i >= 0; i--){


        printf("%c", x[i]);     
    }
    }


int main (){
    int op = 0;
    char frase[50];

    printf("Digite a frase: ");
    fgets(frase,50,stdin);

    printf("MENU\n");
  

do{
    printf("\n[1]converter para Maiusculas\n[2]Inverter a String\n[3]Contar onumero de vogais\n[0]Encerrar\n");
    scanf("%d", &op);
      switch (op){
        case 1:
            covert(frase);
   
        break;
        case 2 :
            ivert(frase);
        break;


    }

    }while(op != 0);
    return 0;

}
