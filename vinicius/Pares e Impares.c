#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    int i;
    int numero[5];
    int pares = 0, impares = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite um número:\n");
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    
    return 0;
}