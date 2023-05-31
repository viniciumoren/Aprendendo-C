#include <stdio.h>

int main (){

    int idade;

    printf ("Digite sua idade:");
    scanf("%d", &idade);

    if (idade >= 18 && idade <=65)
    printf ("Pode votar!");
    else 
    printf ("Não pode votar!");

}