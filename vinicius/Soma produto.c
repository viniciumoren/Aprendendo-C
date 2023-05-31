#include <stdio.h>

int main (){
    
    int numero1, numero2, produto;
    float media, soma;

    printf("Digite um numero: ");
    scanf("%d", &numero1);

    system ("cls");

    printf ("Digite outro numero: ");
    scanf("%d", &numero2);

    system ("cls");

    soma = numero1 + numero2 ;
    media = soma / 2 ;
    produto = numero1 * numero2 ;

    printf ("Media: %.2f", media);
    printf ("\nSoma: %.f", soma);
    printf ("\nProduto: %d", produto);

    if (numero1 > numero2)
    printf ("\nMaior valor:%d \nMenor valor:%d", numero1, numero2);
    else 
    printf ("\nMaior valor:%d \nMenor valor:%d", numero2, numero1);
 
    

    
}