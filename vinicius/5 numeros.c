#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

    int i;
    int numero[5];
    int soma;

    soma = 0;
    i = 0;


    for (i=0; i<5; i++) {
    printf ("Digite um numero");
    scanf ("%d", &numero[i]);
    
    soma = soma + numero[i];
    }

    printf ("Soma:%d", soma);


 return 0;

}