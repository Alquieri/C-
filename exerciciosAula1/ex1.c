#include <stdio.h>

int tempS(int ano){
    int valor;
    if(ano < 1){
        valor = 0;
    }
    else if (ano >= 1 && ano <= 3 ){
        valor = 100;
    }
    else if (ano > 3 && ano <= 6 ){
        valor = 200;
    }
    else if (ano > 7 && ano <= 10 ){
        valor = 300;
    }
    else if (ano > 10){
        valor = 500;
    }
    else{
        printf("Erro");
        return 0;
    }

    return valor;

}

void ex1(){
    int sal, ano, bonus;


    printf("Digite seu salario: ");
    scanf("%d", &sal);
    printf("Digite quantos anos voce trabalhou na empresa: ");
    scanf("%d", &ano);
    bonus = tempS(ano);


    if(sal <= 500){
        sal = sal + (sal * 25 / 100);
        sal = sal + bonus;
         
        printf("Seu salario foi reajustado para %d(25 por cento mais %d de bonus)", sal, bonus);
    }
    else if(sal > 500 && sal <= 1000){
        sal = sal + (sal * 20 / 100);
        sal = sal + bonus;
         
        printf("Seu salario foi reajustado para %d(20 por cento mais %d de bonus)", sal, bonus);        
    }
    else if(sal > 1000 && sal <= 1500){
        sal = sal + (sal * 15 / 100);
        sal = sal + bonus;
            
        printf("Seu salario foi reajustado para %d(15 por cento  mais  %d de bonus)", sal, bonus);        
    }
        else if(sal > 1500 && sal <= 2000){
        sal = sal + (sal * 10 / 100);
        sal = sal + bonus;
         
        printf("Seu salario foi reajustado para %d(10 por cento mais %d de bonus)", sal, bonus);        
    }
    else{
        if (bonus > 0){
               sal = sal + bonus;
         
        printf("Seu salario foi reajustado para %d(%d de bonus)", sal, bonus);    
        }
        else{
        printf("Seu salario nao tera reajuste");    

            
        }
     

    }

}