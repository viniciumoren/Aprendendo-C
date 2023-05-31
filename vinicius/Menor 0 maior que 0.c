#include <stdio.h>

int main (){

    int nota;

    do {
    printf("Digite sua nota: ");
    scanf("%d", &nota);
    } while (nota <= 0 || nota > 10);

    system ("cls");

    printf ("Nota:%d \n", nota);
    
    if (nota >= 7) {
        printf ("Aprovado!");
    }
    else if (nota >= 5) {
        printf ("Recuperação!");
    }
    else
    {   
        printf ("Reprovado!");
    }
}