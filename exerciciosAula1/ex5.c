#include <stdio.h>

void simplifica(int *n,int  *d){
  
        for(int i = 2; i <= *n || i <= *d; i++){

             while(*n % i == 0 && *d %i == 0){

            *n = *n/i;
            *d = *d/i;
            }
        }

    }

void ex5(){

    int a = 36;
    int b = 60;
    simplifica(&a,&b);
    printf("%d / %d", a , b);

}
