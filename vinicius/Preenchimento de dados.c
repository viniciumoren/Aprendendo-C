#include <stdio.h>
#include <stdlib.h>


int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    system("cls");

    if (numero > 10) {
        printf (numero);
        printf(" e maior que 10\n");
    }
    else if (numero < 10) {
        printf (numero); 
        printf(" e menor que 10\n");
    }
    else {
        printf (numero);
        printf(" e igual a 10\n");
    }

    system("pause");

    return 0;
}
