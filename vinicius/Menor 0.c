#include <stdio.h>

int main() {
    int nota;

    do {
        printf("Digite sua nota: ");
        scanf("%d", &nota);
    } while (nota <= 0 || nota > 10);

    printf("Nota: %d\n", nota);

    return 0;
}
