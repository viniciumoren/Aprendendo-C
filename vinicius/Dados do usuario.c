#include <stdio.h>
#include <stdlib.h>

int main () {

    int idade; // inteiro
    float peso; // real
    char nome[100]; // caracter 99
    char sexo; //Somente um caracter

    printf ("Digite sua idade:");
    scanf("%d",&idade);

    printf ("Digite seu peso:");
    scanf ("%f", &peso);

    fflush (stdin); 

    printf ("Digite seu nome:");
    gets (nome);
    
    printf ("Digite seu sexo:");
    scanf ("%c", &sexo);

    system ("cls"); //Limpa tela

    printf ("Idade: %d \n", idade);
    printf ("Peso: %.1f \n", peso);
    printf ("Nome: %s \n", nome);
    printf ("sexo: %c \n", sexo);

    system("pause");

return 0;
}