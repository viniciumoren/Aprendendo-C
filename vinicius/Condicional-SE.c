#include <stdio.h>
#include <stdlib.h>

int main()
{

   
    float primeiraNota;
    float segundaNota; 
    float media;
    float soma;
    
    printf("Seja Bem-Vind@, preencha com seus dados:\n");
    
    printf("Digite sua 1 nota: ");
    scanf("%f",&primeiraNota);

    printf("Digite sua 2 nota: ");
    scanf("%f",&segundaNota);

    soma = primeiraNota + segundaNota;
    media = soma / 2;

    if (media >= 7)
    {
        printf("Aprovado!");
    }
    else
    {
        printf("Reprovado!");
    }

    return 0;
}
