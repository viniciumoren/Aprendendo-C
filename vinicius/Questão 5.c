#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "");

    int filho, familias = 0;
    float salario, totalFilhos, totalSalario;

    
    
    do{
    printf ("Digite seu salario: ");
    scanf ("%f", &salario);

    totalSalario += salario;

    system ("cls");
    

        if (salario > 0) 
        {

        printf ("\nQuantos filhos você tem ? ");
        scanf("%d", &filho);

        system ("cls");

        totalFilhos += filho;

        familias++;

        }
    } while (salario > 0);


    
    
    printf ("N familias: %d", familias);
    printf ("\nMedia salarial: %.2f", totalSalario/familias);
    printf ("\nMedia de filhos por familias: %.f", totalFilhos/familias);

return 0;

}